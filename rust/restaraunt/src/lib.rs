mod front_of_house;

pub use crate::front_of_house::hosting;
pub use crate::front_of_house::serving;

pub fn eat_at_restaraunt () {
    hosting::add_to_waitlist();
}

pub fn pay_restaraunt_bill () {
    serving::take_payment();
}
