SELECT e.unique_id, a.name
FROM Employees a
LEFT JOIN EmployeeUNI e ON a.id = e.id;
