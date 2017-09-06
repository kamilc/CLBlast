
// =================================================================================================
// This file is part of the CLBlast project. The project is licensed under Apache Version 2.0. It
// is auto-generated by the 'scripts/database/database.py' Python script.
//
// This file populates the database with best-found tuning parameters for the 'Xaxpy16' kernels.
//
// =================================================================================================

namespace clblast {
namespace database {

const DatabaseEntry XaxpyHalf = {
  "Xaxpy", Precision::kHalf, {"VW", "WGS", "WPT"}, {
    { // AMD GPUs
      kDeviceTypeGPU, "AMD", {
        { "Ellesmere",                                       { 4, 128, 4 } },
        { "default",                                         { 4, 128, 4 } },
      }
    },
    { // Intel GPUs
      kDeviceTypeGPU, "Intel", {
        { "Intel(R) HD Graphics 5500 BroadWell U-Processor GT2", { 1, 64, 1 } },
        { "Intel(R) HD Graphics Skylake ULT GT2",            { 8, 64, 1 } },
        { "default",                                         { 8, 64, 1 } },
      }
    },
    { // QUALCOMM GPUs
      kDeviceTypeGPU, "QUALCOMM", {
        { "QUALCOMM Adreno(TM)",                             { 8, 64, 1 } },
        { "default",                                         { 8, 64, 1 } },
      }
    },
    { // Default
      kDeviceTypeAll, "default", {
        { "default",                                         { 8, 64, 1 } },
      }
    },
  }
};

} // namespace database
} // namespace clblast