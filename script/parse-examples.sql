-- test select
select
top 50
  test.*,
  *,
  test.abc as test,
  test.abc as test2,
  test.def as test3
  from test as b
  inner join abc as c on (a = b)
where
  test.abc = 5 and
  abc = b or (
    c = 5
  )
GROUP BY
  test.def,
  test.abc,
  ghi
HAVING
  count(1) = 1
ORDER BY
  test.abc,
  def asc,
  test.ghr desc

/*
 * test update
 */
update
test AS a
set
  a.b = 'aaa',
  a.d = 5
where
  citn is null OR
  (
    abc BETWEEN 1 AND 500 AND
    def IN(5, ghr)
  );

insert into abc
(a, b, c)
values
(3, 5, 4),
('a', 'b', 'c')
