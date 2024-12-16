--
-- @lc app=leetcode id=1341 lang=mysql
--
-- [1341] Movie Rating
--

-- @lc code=start
# Write your MySQL query statement below
(
    SELECT U.name as results
    FROM MovieRating AS MR
    JOIN Users AS U ON U.user_id = MR.user_id
    GROUP BY U.user_id
    ORDER BY COUNT(MR.rating) DESC, U.name ASC
    LIMIT 1
)
UNION ALL
(
    SELECT M.title as results
    FROM MovieRating as MR
    JOIN Movies as M ON M.movie_id=MR.movie_id
    WHERE MONTH(MR.created_at)=02 AND YEAR(MR.created_at)=2020
    GROUP BY M.title
    ORDER BY AVG(MR.rating) DESC, M.title ASC
    LIMIT 1
)

-- @lc code=end

