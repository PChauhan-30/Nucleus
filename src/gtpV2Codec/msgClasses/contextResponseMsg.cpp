/*
 * Copyright 2019-present Infosys Limited
 *
 * SPDX-License-Identifier: Apache-2.0
 */

/******************************************************************************
 *
 * This is an auto generated file.
 * Please do not edit this file.
 * All edits to be made through template source file
 * <TOP-DIR/scripts/GtpV2StackCodeGen/tts/msgtemplate.cpp.tt>
 ******************************************************************************/ 

#include "contextResponseMsg.h"
#include "../ieClasses/manual/gtpV2Ie.h"
#include "../ieClasses/gtpV2IeFactory.h"
#include "../ieClasses/causeIe.h"
#include "../ieClasses/imsiIe.h"
#include "../ieClasses/traceInformationIe.h"
#include "../ieClasses/localDistinguishedNameIe.h"
#include "../ieClasses/integerNumberIe.h"
#include "../ieClasses/ratTypeIe.h"
#include "../ieClasses/counterIe.h"
#include "../ieClasses/integerNumberIe.h"

ContextResponseMsg::ContextResponseMsg()
{
    msgType = ContextResponseMsgType;
    Uint16 mandIe;
    mandIe = CauseIeType;
    mandIe = (mandIe << 8) | 0; // cause
    mandatoryIeSet.insert(mandIe);
}

ContextResponseMsg::~ContextResponseMsg()
{

}

bool ContextResponseMsg::encodeContextResponseMsg(MsgBuffer &buffer,
                        ContextResponseMsgData
							const &data)
{
    bool rc = false;
    GtpV2IeHeader header;
    Uint16 startIndex = 0;
    Uint16 endIndex = 0;
    Uint16 length = 0;

    
    // Encode the Ie Header
    header.ieType = CauseIeType;
    header.instance = 0;
    header.length = 0; // We will encode the IE first and then update the length
    GtpV2Ie::encodeGtpV2IeHeader(buffer, header);
    startIndex = buffer.getCurrentIndex(); 
    CauseIe cause=
    dynamic_cast<
    CauseIe&>(GtpV2IeFactory::getInstance().getIeObject(CauseIeType));
    rc = cause.encodeCauseIe(buffer, data.cause);
    endIndex = buffer.getCurrentIndex();
    length = endIndex - startIndex;
    
    // encode the length value now
    buffer.goToIndex(startIndex - 3);
    buffer.writeUint16(length, false);
    buffer.goToIndex(endIndex);

    if (!(rc))
    { 
        errorStream.add((char *)"Failed to encode IE: cause\n");
        return false;
    }

    if (data.imsiIePresent)
    {
        
        // Encode the Ie Header
        header.ieType = ImsiIeType;
        header.instance = 0;
        header.length = 0; // We will encode the IE first and then update the length
        GtpV2Ie::encodeGtpV2IeHeader(buffer, header);
        startIndex = buffer.getCurrentIndex(); 
        ImsiIe imsi=
        dynamic_cast<
        ImsiIe&>(GtpV2IeFactory::getInstance().getIeObject(ImsiIeType));
        rc = imsi.encodeImsiIe(buffer, data.imsi);
        endIndex = buffer.getCurrentIndex();
        length = endIndex - startIndex;
        
        // encode the length value now
        buffer.goToIndex(startIndex - 3);
        buffer.writeUint16(length, false);
        buffer.goToIndex(endIndex);

        if (!(rc))
        { 
            errorStream.add((char *)"Failed to encode IE: imsi\n");
            return false;
        }
    }

    if (data.traceInformationIePresent)
    {
        
        // Encode the Ie Header
        header.ieType = TraceInformationIeType;
        header.instance = 0;
        header.length = 0; // We will encode the IE first and then update the length
        GtpV2Ie::encodeGtpV2IeHeader(buffer, header);
        startIndex = buffer.getCurrentIndex(); 
        TraceInformationIe traceInformation=
        dynamic_cast<
        TraceInformationIe&>(GtpV2IeFactory::getInstance().getIeObject(TraceInformationIeType));
        rc = traceInformation.encodeTraceInformationIe(buffer, data.traceInformation);
        endIndex = buffer.getCurrentIndex();
        length = endIndex - startIndex;
        
        // encode the length value now
        buffer.goToIndex(startIndex - 3);
        buffer.writeUint16(length, false);
        buffer.goToIndex(endIndex);

        if (!(rc))
        { 
            errorStream.add((char *)"Failed to encode IE: traceInformation\n");
            return false;
        }
    }

    if (data.mmeS4SgsnLdnIePresent)
    {
        
        // Encode the Ie Header
        header.ieType = LocalDistinguishedNameIeType;
        header.instance = 0;
        header.length = 0; // We will encode the IE first and then update the length
        GtpV2Ie::encodeGtpV2IeHeader(buffer, header);
        startIndex = buffer.getCurrentIndex(); 
        LocalDistinguishedNameIe mmeS4SgsnLdn=
        dynamic_cast<
        LocalDistinguishedNameIe&>(GtpV2IeFactory::getInstance().getIeObject(LocalDistinguishedNameIeType));
        rc = mmeS4SgsnLdn.encodeLocalDistinguishedNameIe(buffer, data.mmeS4SgsnLdn);
        endIndex = buffer.getCurrentIndex();
        length = endIndex - startIndex;
        
        // encode the length value now
        buffer.goToIndex(startIndex - 3);
        buffer.writeUint16(length, false);
        buffer.goToIndex(endIndex);

        if (!(rc))
        { 
            errorStream.add((char *)"Failed to encode IE: mmeS4SgsnLdn\n");
            return false;
        }
    }

    if (data.ueUsageTypeIePresent)
    {
        
        // Encode the Ie Header
        header.ieType = IntegerNumberIeType;
        header.instance = 0;
        header.length = 0; // We will encode the IE first and then update the length
        GtpV2Ie::encodeGtpV2IeHeader(buffer, header);
        startIndex = buffer.getCurrentIndex(); 
        IntegerNumberIe ueUsageType=
        dynamic_cast<
        IntegerNumberIe&>(GtpV2IeFactory::getInstance().getIeObject(IntegerNumberIeType));
        rc = ueUsageType.encodeIntegerNumberIe(buffer, data.ueUsageType);
        endIndex = buffer.getCurrentIndex();
        length = endIndex - startIndex;
        
        // encode the length value now
        buffer.goToIndex(startIndex - 3);
        buffer.writeUint16(length, false);
        buffer.goToIndex(endIndex);

        if (!(rc))
        { 
            errorStream.add((char *)"Failed to encode IE: ueUsageType\n");
            return false;
        }
    }

    if (data.ratTypeIePresent)
    {
        
        // Encode the Ie Header
        header.ieType = RatTypeIeType;
        header.instance = 0;
        header.length = 0; // We will encode the IE first and then update the length
        GtpV2Ie::encodeGtpV2IeHeader(buffer, header);
        startIndex = buffer.getCurrentIndex(); 
        RatTypeIe ratType=
        dynamic_cast<
        RatTypeIe&>(GtpV2IeFactory::getInstance().getIeObject(RatTypeIeType));
        rc = ratType.encodeRatTypeIe(buffer, data.ratType);
        endIndex = buffer.getCurrentIndex();
        length = endIndex - startIndex;
        
        // encode the length value now
        buffer.goToIndex(startIndex - 3);
        buffer.writeUint16(length, false);
        buffer.goToIndex(endIndex);

        if (!(rc))
        { 
            errorStream.add((char *)"Failed to encode IE: ratType\n");
            return false;
        }
    }

    if (data.moExceptionDataCounterIePresent)
    {
        
        // Encode the Ie Header
        header.ieType = CounterIeType;
        header.instance = 0;
        header.length = 0; // We will encode the IE first and then update the length
        GtpV2Ie::encodeGtpV2IeHeader(buffer, header);
        startIndex = buffer.getCurrentIndex(); 
        CounterIe moExceptionDataCounter=
        dynamic_cast<
        CounterIe&>(GtpV2IeFactory::getInstance().getIeObject(CounterIeType));
        rc = moExceptionDataCounter.encodeCounterIe(buffer, data.moExceptionDataCounter);
        endIndex = buffer.getCurrentIndex();
        length = endIndex - startIndex;
        
        // encode the length value now
        buffer.goToIndex(startIndex - 3);
        buffer.writeUint16(length, false);
        buffer.goToIndex(endIndex);

        if (!(rc))
        { 
            errorStream.add((char *)"Failed to encode IE: moExceptionDataCounter\n");
            return false;
        }
    }

    if (data.remainingRunningServiceGapTimerIePresent)
    {
        
        // Encode the Ie Header
        header.ieType = IntegerNumberIeType;
        header.instance = 1;
        header.length = 0; // We will encode the IE first and then update the length
        GtpV2Ie::encodeGtpV2IeHeader(buffer, header);
        startIndex = buffer.getCurrentIndex(); 
        IntegerNumberIe remainingRunningServiceGapTimer=
        dynamic_cast<
        IntegerNumberIe&>(GtpV2IeFactory::getInstance().getIeObject(IntegerNumberIeType));
        rc = remainingRunningServiceGapTimer.encodeIntegerNumberIe(buffer, data.remainingRunningServiceGapTimer);
        endIndex = buffer.getCurrentIndex();
        length = endIndex - startIndex;
        
        // encode the length value now
        buffer.goToIndex(startIndex - 3);
        buffer.writeUint16(length, false);
        buffer.goToIndex(endIndex);

        if (!(rc))
        { 
            errorStream.add((char *)"Failed to encode IE: remainingRunningServiceGapTimer\n");
            return false;
        }
    }
    return rc;

}

bool ContextResponseMsg::decodeContextResponseMsg(MsgBuffer &buffer,
 ContextResponseMsgData 
 &data, Uint16 length)
{

    bool rc = false;
    GtpV2IeHeader ieHeader;
  
    set<Uint16> mandatoryIeLocalList = mandatoryIeSet;
    while (buffer.lengthLeft() > IE_HEADER_SIZE)
    {
        GtpV2Ie::decodeGtpV2IeHeader(buffer, ieHeader);
        if (ieHeader.length > buffer.lengthLeft())
        {
            // We do not have enough bytes left in the message for this IE
            errorStream.add((char *)"IE Length exceeds beyond message boundary\n");
            errorStream.add((char *)"  Offending IE Type: ");
            errorStream.add(ieHeader.ieType);
            errorStream.add((char *)"\n  Ie Length in Header: ");
            errorStream.add(ieHeader.length);
            errorStream.add((char *)"\n  Bytes left in message: ");
            errorStream.add(buffer.lengthLeft());
            errorStream.endOfLine();
            return false;
        }

        switch (ieHeader.ieType){
     
            case CauseIeType:
            {
                CauseIe ieObject =
                dynamic_cast<
                CauseIe&>(GtpV2IeFactory::getInstance().getIeObject(CauseIeType));

                if(ieHeader.instance == 0)
                {
                    rc = ieObject.decodeCauseIe(buffer, data.cause, ieHeader.length);

                    if (!(rc))
                    {
                        errorStream.add((char *)"Failed to decode IE: cause\n");
                        return false;
                    }
                }

                else
                {
                    // Unknown IE instance print error
                    errorStream.add((char *)"Unknown IE Type: ");
                    errorStream.add(ieHeader.ieType);
                    errorStream.endOfLine();
                    buffer.skipBytes(ieHeader.length);
                }
                break;
            }
     
            case ImsiIeType:
            {
                ImsiIe ieObject =
                dynamic_cast<
                ImsiIe&>(GtpV2IeFactory::getInstance().getIeObject(ImsiIeType));

                if(ieHeader.instance == 0)
                {
                    rc = ieObject.decodeImsiIe(buffer, data.imsi, ieHeader.length);

                    data.imsiIePresent = true;
                    if (!(rc))
                    {
                        errorStream.add((char *)"Failed to decode IE: imsi\n");
                        return false;
                    }
                }

                else
                {
                    // Unknown IE instance print error
                    errorStream.add((char *)"Unknown IE Type: ");
                    errorStream.add(ieHeader.ieType);
                    errorStream.endOfLine();
                    buffer.skipBytes(ieHeader.length);
                }
                break;
            }
     
            case TraceInformationIeType:
            {
                TraceInformationIe ieObject =
                dynamic_cast<
                TraceInformationIe&>(GtpV2IeFactory::getInstance().getIeObject(TraceInformationIeType));

                if(ieHeader.instance == 0)
                {
                    rc = ieObject.decodeTraceInformationIe(buffer, data.traceInformation, ieHeader.length);

                    data.traceInformationIePresent = true;
                    if (!(rc))
                    {
                        errorStream.add((char *)"Failed to decode IE: traceInformation\n");
                        return false;
                    }
                }

                else
                {
                    // Unknown IE instance print error
                    errorStream.add((char *)"Unknown IE Type: ");
                    errorStream.add(ieHeader.ieType);
                    errorStream.endOfLine();
                    buffer.skipBytes(ieHeader.length);
                }
                break;
            }
     
            case LocalDistinguishedNameIeType:
            {
                LocalDistinguishedNameIe ieObject =
                dynamic_cast<
                LocalDistinguishedNameIe&>(GtpV2IeFactory::getInstance().getIeObject(LocalDistinguishedNameIeType));

                if(ieHeader.instance == 0)
                {
                    rc = ieObject.decodeLocalDistinguishedNameIe(buffer, data.mmeS4SgsnLdn, ieHeader.length);

                    data.mmeS4SgsnLdnIePresent = true;
                    if (!(rc))
                    {
                        errorStream.add((char *)"Failed to decode IE: mmeS4SgsnLdn\n");
                        return false;
                    }
                }

                else
                {
                    // Unknown IE instance print error
                    errorStream.add((char *)"Unknown IE Type: ");
                    errorStream.add(ieHeader.ieType);
                    errorStream.endOfLine();
                    buffer.skipBytes(ieHeader.length);
                }
                break;
            }
     
            case IntegerNumberIeType:
            {
                IntegerNumberIe ieObject =
                dynamic_cast<
                IntegerNumberIe&>(GtpV2IeFactory::getInstance().getIeObject(IntegerNumberIeType));

                if(ieHeader.instance == 0)
                {
                    rc = ieObject.decodeIntegerNumberIe(buffer, data.ueUsageType, ieHeader.length);

                    data.ueUsageTypeIePresent = true;
                    if (!(rc))
                    {
                        errorStream.add((char *)"Failed to decode IE: ueUsageType\n");
                        return false;
                    }
                }
                else if(ieHeader.instance == 1)
                {
                    rc = ieObject.decodeIntegerNumberIe(buffer, data.remainingRunningServiceGapTimer, ieHeader.length);

                    data.remainingRunningServiceGapTimerIePresent = true;
                    if (!(rc))
                    {
                        errorStream.add((char *)"Failed to decode IE: remainingRunningServiceGapTimer\n");
                        return false;
                    }
                }

                else
                {
                    // Unknown IE instance print error
                    errorStream.add((char *)"Unknown IE Type: ");
                    errorStream.add(ieHeader.ieType);
                    errorStream.endOfLine();
                    buffer.skipBytes(ieHeader.length);
                }
                break;
            }
     
            case RatTypeIeType:
            {
                RatTypeIe ieObject =
                dynamic_cast<
                RatTypeIe&>(GtpV2IeFactory::getInstance().getIeObject(RatTypeIeType));

                if(ieHeader.instance == 0)
                {
                    rc = ieObject.decodeRatTypeIe(buffer, data.ratType, ieHeader.length);

                    data.ratTypeIePresent = true;
                    if (!(rc))
                    {
                        errorStream.add((char *)"Failed to decode IE: ratType\n");
                        return false;
                    }
                }

                else
                {
                    // Unknown IE instance print error
                    errorStream.add((char *)"Unknown IE Type: ");
                    errorStream.add(ieHeader.ieType);
                    errorStream.endOfLine();
                    buffer.skipBytes(ieHeader.length);
                }
                break;
            }
     
            case CounterIeType:
            {
                CounterIe ieObject =
                dynamic_cast<
                CounterIe&>(GtpV2IeFactory::getInstance().getIeObject(CounterIeType));

                if(ieHeader.instance == 0)
                {
                    rc = ieObject.decodeCounterIe(buffer, data.moExceptionDataCounter, ieHeader.length);

                    data.moExceptionDataCounterIePresent = true;
                    if (!(rc))
                    {
                        errorStream.add((char *)"Failed to decode IE: moExceptionDataCounter\n");
                        return false;
                    }
                }

                else
                {
                    // Unknown IE instance print error
                    errorStream.add((char *)"Unknown IE Type: ");
                    errorStream.add(ieHeader.ieType);
                    errorStream.endOfLine();
                    buffer.skipBytes(ieHeader.length);
                }
                break;
            }

            default:
            {
                // Unknown IE print error
                errorStream.add((char *)"Unknown IE Type: ");
                errorStream.add(ieHeader.ieType);
                errorStream.endOfLine();
                buffer.skipBytes(ieHeader.length);
            }
        }
    }
    return rc; // TODO validations
}

void ContextResponseMsg::
displayContextResponseMsgData_v(ContextResponseMsgData const &data, Debug &stream)
{
    stream.incrIndent();
    stream.add((char *)"ContextResponseMsg:");
    stream.endOfLine();
    stream.incrIndent();
        
    
    stream.add((char *)"IE - cause:");
    stream.endOfLine();
    CauseIe cause=
    dynamic_cast<
    CauseIe&>(GtpV2IeFactory::getInstance().getIeObject(CauseIeType));
    cause.displayCauseIe_v(data.cause, stream);

    if (data.imsiIePresent)
    {


        stream.add((char *)"IE - imsi:");
        stream.endOfLine();
        ImsiIe imsi=
        dynamic_cast<
        ImsiIe&>(GtpV2IeFactory::getInstance().getIeObject(ImsiIeType));
        imsi.displayImsiIe_v(data.imsi, stream);

    }
    if (data.traceInformationIePresent)
    {


        stream.add((char *)"IE - traceInformation:");
        stream.endOfLine();
        TraceInformationIe traceInformation=
        dynamic_cast<
        TraceInformationIe&>(GtpV2IeFactory::getInstance().getIeObject(TraceInformationIeType));
        traceInformation.displayTraceInformationIe_v(data.traceInformation, stream);

    }
    if (data.mmeS4SgsnLdnIePresent)
    {


        stream.add((char *)"IE - mmeS4SgsnLdn:");
        stream.endOfLine();
        LocalDistinguishedNameIe mmeS4SgsnLdn=
        dynamic_cast<
        LocalDistinguishedNameIe&>(GtpV2IeFactory::getInstance().getIeObject(LocalDistinguishedNameIeType));
        mmeS4SgsnLdn.displayLocalDistinguishedNameIe_v(data.mmeS4SgsnLdn, stream);

    }
    if (data.ueUsageTypeIePresent)
    {


        stream.add((char *)"IE - ueUsageType:");
        stream.endOfLine();
        IntegerNumberIe ueUsageType=
        dynamic_cast<
        IntegerNumberIe&>(GtpV2IeFactory::getInstance().getIeObject(IntegerNumberIeType));
        ueUsageType.displayIntegerNumberIe_v(data.ueUsageType, stream);

    }
    if (data.ratTypeIePresent)
    {


        stream.add((char *)"IE - ratType:");
        stream.endOfLine();
        RatTypeIe ratType=
        dynamic_cast<
        RatTypeIe&>(GtpV2IeFactory::getInstance().getIeObject(RatTypeIeType));
        ratType.displayRatTypeIe_v(data.ratType, stream);

    }
    if (data.moExceptionDataCounterIePresent)
    {


        stream.add((char *)"IE - moExceptionDataCounter:");
        stream.endOfLine();
        CounterIe moExceptionDataCounter=
        dynamic_cast<
        CounterIe&>(GtpV2IeFactory::getInstance().getIeObject(CounterIeType));
        moExceptionDataCounter.displayCounterIe_v(data.moExceptionDataCounter, stream);

    }
    if (data.remainingRunningServiceGapTimerIePresent)
    {


        stream.add((char *)"IE - remainingRunningServiceGapTimer:");
        stream.endOfLine();
        IntegerNumberIe remainingRunningServiceGapTimer=
        dynamic_cast<
        IntegerNumberIe&>(GtpV2IeFactory::getInstance().getIeObject(IntegerNumberIeType));
        remainingRunningServiceGapTimer.displayIntegerNumberIe_v(data.remainingRunningServiceGapTimer, stream);

    }

    stream.decrIndent();
    stream.decrIndent();
}

