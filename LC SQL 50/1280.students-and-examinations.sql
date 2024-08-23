# Write your MySQL query statement below
SELECT 
    ST.student_id,
    ST.student_name,
    SB.subject_name,
    COUNT(EX.subject_name) as "attended_exams"
FROM Students as ST
CROSS JOIN Subjects as SB
LEFT JOIN Examinations as EX
    ON ST.student_id = EX.student_id
    AND SB.subject_name = EX.subject_name
GROUP BY 
    ST.student_id,
    ST.student_name,
    SB.subject_name
ORDER BY 
    ST.student_id,
    SB.subject_name;