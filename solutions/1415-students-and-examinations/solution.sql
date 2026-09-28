# Write your MySQL query statement below
SELECT st.student_id, st.student_name, sb.subject_name, COUNT(e.student_id) as attended_exams
FROM Students st CROSS JOIN Subjects sb
LEFT JOIN Examinations e ON sb.subject_name = e.subject_name AND e.student_id = st.student_id
GROUP BY st.student_id, st.student_name, sb.subject_name
ORDER BY st.student_id, st.student_name, sb.subject_name
