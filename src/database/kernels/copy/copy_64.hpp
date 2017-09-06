
// =================================================================================================
// This file is part of the CLBlast project. The project is licensed under Apache Version 2.0. It
// is auto-generated by the 'scripts/database/database.py' Python script.
//
// This file populates the database with best-found tuning parameters for the 'Copy64' kernels.
//
// =================================================================================================

namespace clblast {
namespace database {

const DatabaseEntry CopyDouble = {
  "Copy", Precision::kDouble, {"COPY_DIMX", "COPY_DIMY", "COPY_VW", "COPY_WPT"}, {
    { // AMD GPUs
      kDeviceTypeGPU, "AMD", {
        { "AMD Radeon R9 M370X Compute Engine",              { 32, 8, 1, 1 } },
        { "Ellesmere",                                       { 32, 8, 1, 4 } },
        { "Fiji",                                            { 16, 8, 1, 2 } },
        { "Hawaii",                                          { 32, 8, 1, 2 } },
        { "Oland",                                           { 32, 8, 2, 8 } },
        { "Pitcairn",                                        { 32, 8, 1, 1 } },
        { "Tahiti",                                          { 8, 32, 2, 1 } },
        { "Tonga",                                           { 8, 32, 2, 4 } },
        { "default",                                         { 16, 8, 2, 1 } },
      }
    },
    { // ARM GPUs
      kDeviceTypeGPU, "ARM", {
        { "Mali-T628",                                       { 16, 8, 8, 2 } },
        { "default",                                         { 16, 8, 8, 2 } },
      }
    },
    { // Intel CPUs
      kDeviceTypeCPU, "Intel", {
        { "Intel(R) Core(TM) i7-2670QM CPU @ 2.20GHz",       { 16, 32, 8, 1 } },
        { "Intel(R) Core(TM) i5-6200U CPU @ 2.30GHz",        { 16, 8, 8, 1 } },
        { "Intel(R) Core(TM) i7 CPU         920  @ 2.67GHz", { 32, 16, 8, 1 } },
        { "Intel(R) Core(TM) i7-3770 CPU @ 3.40GHz",         { 16, 32, 2, 1 } },
        { "Intel(R) Core(TM) i7-4790K CPU @ 4.00GHz",        { 16, 32, 8, 1 } },
        { "Intel(R) Core(TM) i7-5930K CPU @ 3.50GHz",        { 16, 16, 8, 1 } },
        { "default",                                         { 16, 8, 8, 1 } },
      }
    },
    { // Intel accelerators
      kDeviceTypeAccelerator, "Intel", {
        { "Intel(R) Many Integrated Core Acceleration Card", { 8, 8, 8, 1 } },
        { "default",                                         { 8, 8, 8, 1 } },
      }
    },
    { // NVIDIA GPUs
      kDeviceTypeGPU, "NVIDIA", {
        { "GRID K520",                                       { 32, 16, 2, 1 } },
        { "GeForce GTX 1070",                                { 8, 8, 4, 1 } },
        { "GeForce GTX 1080",                                { 8, 8, 4, 1 } },
        { "GeForce GTX 480",                                 { 8, 8, 2, 1 } },
        { "GeForce GTX 670",                                 { 8, 8, 2, 1 } },
        { "GeForce GTX 680",                                 { 16, 32, 2, 1 } },
        { "GeForce GTX 750",                                 { 8, 16, 2, 1 } },
        { "GeForce GTX 750 Ti",                              { 16, 8, 2, 1 } },
        { "GeForce GTX 980",                                 { 32, 8, 2, 1 } },
        { "GeForce GTX TITAN",                               { 16, 32, 2, 2 } },
        { "GeForce GTX TITAN Black",                         { 16, 8, 2, 8 } },
        { "GeForce GTX TITAN X",                             { 32, 16, 1, 1 } },
        { "TITAN X (Pascal)",                                { 8, 8, 2, 2 } },
        { "Tesla K20m",                                      { 8, 8, 2, 1 } },
        { "Tesla K40m",                                      { 8, 8, 2, 2 } },
        { "default",                                         { 32, 32, 2, 1 } },
      }
    },
    { // Default
      kDeviceTypeAll, "default", {
        { "default",                                         { 16, 8, 2, 1 } },
      }
    },
  }
};

} // namespace database
} // namespace clblast