# Write your MySQL query statement below
(SELECT name as results from MovieRating JOIN USERS  USING(user_id) Group by name Order By count(*) DESC, name Limit 1)
Union ALL
(Select title as results from MovieRating Join Movies Using(movie_id) WHERE Extract(YEAR_MONTH FROM created_at) = 202002 GROUP BY title ORDER BY AVG(rating) DESC, title LIMIT 1);
