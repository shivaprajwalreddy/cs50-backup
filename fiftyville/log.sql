-- Keep a log of any SQL queries you execute as you solve the mystery.

select * from crime_scene_reports where description like '%Duck%';

select * from interviews where transcript like '%bakery%';

select * from atm_transactions where year = 2023 and month = 7 and day = 28 and atm_location = 'Leggett Street';
