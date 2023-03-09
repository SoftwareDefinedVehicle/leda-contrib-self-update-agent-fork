//    Copyright 2022 Contributors to the Eclipse Foundation
//
//    Licensed under the Apache License, Version 2.0 (the "License");
//    you may not use this file except in compliance with the License.
//    You may obtain a copy of the License at
//
//        http://www.apache.org/licenses/LICENSE-2.0
//
//    Unless required by applicable law or agreed to in writing, software
//    distributed under the License is distributed on an "AS IS" BASIS,
//    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//    See the License for the specific language governing permissions and
//    limitations under the License.
//
//    SPDX-License-Identifier: Apache-2.0

#ifndef SDV_SUA_TECHCODES_H
#define SDV_SUA_TECHCODES_H

namespace sua {

/** @see cv::Error::Code */
enum {
 CV_StsOk=                       0,  /**< everything is ok                */
 CV_StsBackTrace=               -1,  /**< pseudo error for back trace     */
 CV_StsError=                   -2,  /**< unknown /unspecified error      */
 CV_StsInternal=                -3,  /**< internal error (bad state)      */
 CV_StsNoMem=                   -4,  /**< insufficient memory             */
 CV_StsBadArg=                  -5,  /**< function arg/param is bad       */
 CV_StsBadFunc=                 -6,  /**< unsupported function            */
 CV_StsNoConv=                  -7,  /**< iter. didn't converge           */
 CV_StsAutoTrace=               -8,  /**< tracing                         */
 CV_HeaderIsNull=               -9,  /**< image header is NULL            */
 CV_BadImageSize=              -10,  /**< image size is invalid           */
 CV_BadOffset=                 -11,  /**< offset is invalid               */
 CV_BadDataPtr=                -12,  /**/
 CV_BadStep=                   -13,  /**< image step is wrong, this may happen for a non-continuous matrix */
 CV_BadModelOrChSeq=           -14,  /**/
 CV_BadNumChannels=            -15,  /**< bad number of channels, for example, some functions accept only single channel matrices */
 CV_BadNumChannel1U=           -16,  /**/
 CV_BadDepth=                  -17,  /**< input image depth is not supported by the function */
 CV_BadAlphaChannel=           -18,  /**/
 CV_BadOrder=                  -19,  /**< number of dimensions is out of range */
 CV_BadOrigin=                 -20,  /**< incorrect input origin               */
 CV_BadAlign=                  -21,  /**< incorrect input align                */
 CV_BadCallBack=               -22,  /**/
 CV_BadTileSize=               -23,  /**/
 CV_BadCOI=                    -24,  /**< input COI is not supported           */
 CV_BadROISize=                -25,  /**< incorrect input roi                  */
 CV_MaskIsTiled=               -26,  /**/
 CV_StsNullPtr=                -27,  /**< null pointer */
 CV_StsVecLengthErr=           -28,  /**< incorrect vector length */
 CV_StsFilterStructContentErr= -29,  /**< incorrect filter structure content */
 CV_StsKernelStructContentErr= -30,  /**< incorrect transform kernel content */
 CV_StsFilterOffsetErr=        -31,  /**< incorrect filter offset value */
 CV_StsBadSize=                -201, /**< the input/output structure size is incorrect  */
 CV_StsDivByZero=              -202, /**< division by zero */
 CV_StsInplaceNotSupported=    -203, /**< in-place operation is not supported */
 CV_StsObjectNotFound=         -204, /**< request can't be completed */
 CV_StsUnmatchedFormats=       -205, /**< formats of input/output arrays differ */
 CV_StsBadFlag=                -206, /**< flag is wrong or not supported */
 CV_StsBadPoint=               -207, /**< bad CvPoint */
 CV_StsBadMask=                -208, /**< bad format of mask (neither 8uC1 nor 8sC1)*/
 CV_StsUnmatchedSizes=         -209, /**< sizes of input/output structures do not match */
 CV_StsUnsupportedFormat=      -210, /**< the data format/type is not supported by the function*/
 CV_StsOutOfRange=             -211, /**< some of parameters are out of range */
 CV_StsParseError=             -212, /**< invalid syntax/structure of the parsed file */
 CV_StsNotImplemented=         -213, /**< the requested function/feature is not implemented */
 CV_StsBadMemBlock=            -214, /**< an allocated block has been corrupted */
 CV_StsAssert=                 -215, /**< assertion failed   */
 CV_GpuNotSupported=           -216, /**< no CUDA support    */
 CV_GpuApiCallError=           -217, /**< GPU API call error */
 CV_OpenGlNotSupported=        -218, /**< no OpenGL support  */
 CV_OpenGlApiCallError=        -219, /**< OpenGL API call error */
 CV_OpenCLApiCallError=        -220, /**< OpenCL API call error */
 CV_OpenCLDoubleNotSupported=  -221,
 CV_OpenCLInitError=           -222, /**< OpenCL initialization error */
 CV_OpenCLNoAMDBlasFft=        -223
};

    enum class TechCode {
        OK                 = 0,
        DownloadFailed     = 1001,
        InvalidBundle      = 2001,
        InstallationFailed = 3001,
        UpdateRejected     = 4001,
        UnknownError       = 5001
    };

} // namespace sua

#endif
