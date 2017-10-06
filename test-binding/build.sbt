import sbt._


// Disable GC since the CLI is a short-lived process.
nativeGC := "none"

nativeLinkingOptions := Seq(
  "-v",
  "-lcurl",
  "-L", (baseDirectory.value / ".." / "enumfoo" / "target").toPath.toAbsolutePath.toString
)
