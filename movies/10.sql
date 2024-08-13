select distinct name from people where id in
(
    select person_id from directors where movie_id in
    (
        select movie_id from ratings where ratings > 9.0
    )
);
