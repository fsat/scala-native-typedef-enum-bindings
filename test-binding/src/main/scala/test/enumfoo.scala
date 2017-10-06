package test

import scala.scalanative.native
import scala.scalanative.native._

@native.link("enumfoo")
@native.extern
object enumfoo {
  class Plant(val value: CInt) extends AnyVal
  val CACTUS: Plant = native.extern

  def print_plant_enum_name(plant: Plant): Unit = native.extern
}
