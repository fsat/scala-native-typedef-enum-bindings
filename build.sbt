import sbt._

scalaVersion := "2.11.11"

lazy val root = project
  .in(file("."))
  .aggregate(
    `test-binding`
  )
  .settings(
    scalaVersion := "2.11.11"
  )

lazy val `test-binding` = project
  .in(file("test-binding"))
  .enablePlugins(ScalaNativePlugin)
  .settings(Seq(
    scalaVersion := "2.11.11"
  ))
