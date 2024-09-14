-- Hard Problems

/*
Show all of the patients grouped into weight groups.
Show the total amount of patients in each weight group.
Order the list by the weight group decending.
*/
SELECT
	count(*) as patients_in_group,
    floor(weight / 10) * 10 as weight_group
FROM patients
group by weight_group
order by weight_group DESC;

/*
Show patient_id, weight, height, isObese from the patients table.
Display isObese as a boolean 0 or 1.
Obese is defined as weight(kg)/(height(m)2) >= 30.
weight is in units kg.
height is in units cm.
*/
SELECT
	patient_id,
    weight,
    height,
    case WHEN weight / power(height*0.01, 2) >= 30 then 1 ELSE 0 END as isObese
FROM patients;

/*
Show patient_id, first_name, last_name, and attending doctor's specialty.
Show only the patients who has a diagnosis as 'Epilepsy' and the doctor's first name is 'Lisa'
Check patients, admissions, and doctors tables for required information.
*/
SELECT
	p.patient_id,
    p.first_name,
    p.last_name,
    d.specialty
FROM patients as p
join admissions as a on a.patient_id=p.patient_id
join doctors as d on d.doctor_id=a.attending_doctor_id
where a.diagnosis='Epilepsy' AND d.first_name='Lisa'

/*
All patients who have gone through admissions, can see their medical documents on our site. Those patients are given a temporary password after their first admission. Show the patient_id and temp_password.
The password must be the following, in order:
1. patient_id
2. the numerical length of patient's last_name
3. year of patient's birth_date
*/
SELECT
	DISTINCT p.patient_id,
  concat(p.patient_id,len(p.last_name),year(p.birth_date)) as temp_password
FROM patients as p
join admissions as a on a.patient_id=p.patient_id;

/*
Each admission costs $50 for patients without insurance, and $10 for patients with insurance. All patients with an even patient_id have insurance.
Give each patient a 'Yes' if they have insurance, and a 'No' if they don't have insurance. Add up the admission_total cost for each has_insurance group.
*/
SELECT
	CASE
    WHEN patient_id%2 = 0 THEN 'Yes'
    ELSE 'No'
  END as has_insurance,
    SUM(
      CASE 
        WHEN patient_id%2=0 THEN 10
        ELSE 50
      END
    ) AS cost_after_insurance
FROM admissions
GROUP BY has_insurance;

/*
Show the provinces that has more patients identified as 'M' than 'F'. Must only show full province_name
*/
SELECT
	pr.province_name as province_name
FROM patients as pa
join province_names as pr on pr.province_id = pa.province_id
GROUP BY province_name
having SUM(pa.gender='M') >= SUM(pa.gender='F');

/*
We are looking for a specific patient. Pull all columns for the patient who matches the following criteria:
- First_name contains an 'r' after the first two letters.
- Identifies their gender as 'F'
- Born in February, May, or December
- Their weight would be between 60kg and 80kg
- Their patient_id is an odd number
- They are from the city 'Kingston'
*/
SELECT
	*
from patients
where 
  first_name like '__r%' 
  AND
  gender = 'F'
  AND
  MONTH(birth_date) in (2,5,12)
  AND
  weight between 60 and 80
  AND
  patient_id%2 != 0
  AND
  city = 'Kingston';

/*
Show the percent of patients that have 'M' as their gender. Round the answer to the nearest hundreth number and in percent form.
*/
SELECT 
  CONCAT(ROUND(AVG(gender = 'M')*100, 2), '%') AS percent_of_male_patients
FROM patients;

/*
For each day display the total amount of admissions on that day. Display the amount changed from the previous date.
*/
SELECT 
  admission_date,
  COUNT(patient_id) AS total_admissions,
  COUNT(patient_id) - LAG(COUNT(patient_id)) OVER (ORDER BY admission_date) AS admission_count_change
FROM admissions
GROUP BY admission_date
ORDER BY admission_date;

/*
Sort the province names in ascending order in such a way that the province 'Ontario' is always on top.
*/
SELECT 
  province_name
FROM province_names
order by case when province_name = 'Ontario' THEn 1 ELSE 2 END;

/*
We need a breakdown for the total amount of admissions each doctor has started each year. Show the doctor_id, doctor_full_name, specialty, year, total_admissions for that year.
*/
SELECT 
  d.doctor_id,
  concat(d.first_name,' ',d.last_name) as doctor_name,
  d.specialty,
  year(a.admission_date) as selected_year,
  count(a.patient_id) as total_admission
FROM admissions as a
join doctors as d on d.doctor_id=a.attending_doctor_id
group by selected_year,d.doctor_id;