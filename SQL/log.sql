-- Keep a log of any SQL queries you execute as you solve the mystery.

select * from crime_scene_reports where description like '%Duck%';

select * from interviews where transcript like '%bakery%';

select * from atm_transactions where year = 2023 and month = 7 and day = 28 and atm_location = 'Leggett Street';

select * from flights where year = 2023 and month = 7 and day = 29 and origin_airport_id = (select id from airports where city = 'Fiftyville')order
 by hour asc, minute asc;

 select * from passengers where flight_id = 36;

 select * from airports where id = 4;

 select * from phone_calls where year = 2023 and month = 7 and day = 28 and duration < 60;

 select * from bakery_security_logs where year = 2023 and month = 7 and day = 28 and hour = 10 and minute > 15 and minute < 25;

 select * from people where phone_number in (select caller from phone_calls where year = 2023 and month = 7 and day = 28 and duration < 60)
    and passport_number in (select passport_number from passengers where flight_id = 36)
    and license_plate in (select license_plate from bakery_security_logs where year = 2023 and month = 7 and day = 28 and hour = 10 and minute > 15 and minute < 25)
    and id in (select person_id from bank_accounts where account_number in (select account_number from atm_transactions where year = 2023 and month = 7 and day = 28 and atm_location = 'Leggett Street'));

sqlite> select * from people where phone_number = '(375) 555-8161';
