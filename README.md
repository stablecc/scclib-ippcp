# scclib import for Intel Integrated Performance Primitives Cryptography

Requires an installed
[Intel ipp cryptography library](https://www.intel.com/content/www/us/en/developer/tools/oneapi/ipp.html).

## installation

The IPP library should be installed in the default location `/opt/intel`, and shared libraries
made available at run time, for example:
```
$ cat /etc/ld.so.conf.d/ippcp.conf 
/opt/intel/ippcp/lib/intel64
$ sudo ldconfig
```

## licensing

Original source:
* [BSD 3-Clause License](lic/bsd_3_clause.txt)

External and redistributable:
* [ippcp](lic/intel.txt)
* [googletest](lic/google.txt)
