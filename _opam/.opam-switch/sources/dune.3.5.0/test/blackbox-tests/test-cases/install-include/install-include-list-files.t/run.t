Include a file generated by listing the contents of a directory.

  $ dune build @install

  $ cat _build/default/foo.install
  lib: [
    "_build/install/default/lib/foo/META"
    "_build/install/default/lib/foo/dune-package"
  ]
  share: [
    "_build/install/default/share/foo/resources/a.txt" {"resources/a.txt"}
    "_build/install/default/share/foo/resources/b.txt" {"resources/b.txt"}
    "_build/install/default/share/foo/resources/c.txt" {"resources/c.txt"}
  ]
  $ find _build/install/default/share | sort
  _build/install/default/share
  _build/install/default/share/foo
  _build/install/default/share/foo/resources
  _build/install/default/share/foo/resources/a.txt
  _build/install/default/share/foo/resources/b.txt
  _build/install/default/share/foo/resources/c.txt
