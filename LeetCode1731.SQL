SELECT 
    e.employee_id,
    e.name, 
    COUNT(m.reports_to) AS reports_count,
    ROUND(AVG(m.age * 1.00), 0) AS average_age 
FROM 
    Employees e 
JOIN 
    Employees m 
ON 
    e.employee_id = m.reports_to 
GROUP BY 
    e.employee_id 
ORDER BY 
    e.employee_id;