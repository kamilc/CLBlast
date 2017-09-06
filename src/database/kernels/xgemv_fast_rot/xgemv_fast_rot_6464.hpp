
// =================================================================================================
// This file is part of the CLBlast project. The project is licensed under Apache Version 2.0. It
// is auto-generated by the 'scripts/database/database.py' Python script.
//
// This file populates the database with best-found tuning parameters for the 'Xgemv_Fast_Rot6464' kernels.
//
// =================================================================================================

namespace clblast {
namespace database {

const DatabaseEntry XgemvFastRotComplexDouble = {
  "XgemvFastRot", Precision::kComplexDouble, {"VW3", "WGS3", "WPT3"}, {
    { // AMD GPUs
      kDeviceTypeGPU, "AMD", {
        { "AMD Radeon R9 M370X Compute Engine",              { 4, 32, 16 } },
        { "Ellesmere",                                       { 4, 16, 16 } },
        { "Fiji",                                            { 4, 32, 8 } },
        { "Tonga",                                           { 4, 16, 8 } },
        { "default",                                         { 8, 32, 16 } },
      }
    },
    { // Intel CPUs
      kDeviceTypeCPU, "Intel", {
        { "Intel(R) Core(TM) i7-2670QM CPU @ 2.20GHz",       { 2, 16, 16 } },
        { "Intel(R) Core(TM) i7 CPU         920  @ 2.67GHz", { 4, 64, 4 } },
        { "Intel(R) Core(TM) i7-4790K CPU @ 4.00GHz",        { 2, 16, 16 } },
        { "Intel(R) Core(TM) i7-5930K CPU @ 3.50GHz",        { 8, 16, 16 } },
        { "default",                                         { 8, 16, 16 } },
      }
    },
    { // Default
      kDeviceTypeAll, "default", {
        { "default",                                         { 4, 16, 16 } },
      }
    },
  }
};

} // namespace database
} // namespace clblast