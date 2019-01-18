// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "BodyStateEnums.generated.h"

UENUM(BlueprintType, Category = "BS Enums")
enum class EBodyStateHandType : uint8
{
	BodyState_HAND_UNKNOWN,
	BodyState_HAND_LEFT,
	BodyState_HAND_RIGHT
};

UENUM(BlueprintType, Category = "BS Enums")
enum class EBodyStateAutoRigType : uint8
{
	HAND_LEFT,
	HAND_RIGHT,
	BOTH_HANDS
};

//Standard skeleton, Similar to UE - Good Baseline for now
UENUM(BlueprintType, Category = "BS Enums")
enum class EBodyStateBasicBoneType : uint8
{
	BONE_ROOT,
	
	//Body
	BONE_PELVIS,
	BONE_SPINE_1,
	BONE_SPINE_2,
	BONE_SPINE_3,

	//Left Arm
	BONE_CLAVICLE_L,
	BONE_UPPERARM_L,
	BONE_LOWERARM_L,
	BONE_HAND_WRIST_L,
	BONE_INDEX_0_METACARPAL_L,
	BONE_INDEX_1_PROXIMAL_L,
	BONE_INDEX_2_INTERMEDIATE_L,
	BONE_INDEX_3_DISTAL_L,
	BONE_MIDDLE_0_METACARPAL_L,
	BONE_MIDDLE_1_PROXIMAL_L,
	BONE_MIDDLE_2_INTERMEDIATE_L,
	BONE_MIDDLE_3_DISTAL_L,
	BONE_PINKY_0_METACARPAL_L,
	BONE_PINKY_1_PROXIMAL_L,
	BONE_PINKY_2_INTERMEDIATE_L,
	BONE_PINKY_3_DISTAL_L,
	BONE_RING_0_METACARPAL_L,
	BONE_RING_1_PROXIMAL_L,
	BONE_RING_2_INTERMEDIATE_L,
	BONE_RING_3_DISTAL_L,
	BONE_THUMB_0_METACARPAL_L,
	BONE_THUMB_1_PROXIMAL_L,
	BONE_THUMB_2_DISTAL_L,
	BONE_LOWERARM_TWIST_1_L,
	BONE_UPPERARM_TWIST_1_L,

	//Right Arm
	BONE_CLAVICLE_R,
	BONE_UPPERARM_R,
	BONE_LOWERARM_R,
	BONE_HAND_WRIST_R,
	BONE_INDEX_0_METACARPAL_R,
	BONE_INDEX_1_PROXIMAL_R,
	BONE_INDEX_2_INTERMEDIATE_R,
	BONE_INDEX_3_DISTAL_R,
	BONE_MIDDLE_0_METACARPAL_R,
	BONE_MIDDLE_1_PROXIMAL_R,
	BONE_MIDDLE_2_INTERMEDIATE_R,
	BONE_MIDDLE_3_DISTAL_R,
	BONE_PINKY_0_METACARPAL_R,
	BONE_PINKY_1_PROXIMAL_R,
	BONE_PINKY_2_INTERMEDIATE_R,
	BONE_PINKY_3_DISTAL_R,
	BONE_RING_0_METACARPAL_R,
	BONE_RING_1_PROXIMAL_R,
	BONE_RING_2_INTERMEDIATE_R,
	BONE_RING_3_DISTAL_R,
	BONE_THUMB_0_METACARPAL_R,
	BONE_THUMB_1_PROXIMAL_R,
	BONE_THUMB_2_DISTAL_R,
	BONE_LOWERARM_TWIST_1_R,
	BONE_UPPERARM_TWIST_1_R,

	//Head
	BONE_NECK_1,
	BONE_HEAD,

	//Left Foot
	BONE_THIGH_L,
	BONE_CALF_L,
	BONE_CALF_TWIST_1_L,
	BONE_FOOT_L,
	BONE_BALL_L,
	BONE_THIGH_TWIST_1_L,

	//Right Foot
	BONE_THIGH_R,
	BONE_CALF_R,
	BONE_CALF_TWIST_1_R,
	BONE_FOOT_R,
	BONE_BALL_R,
	BONE_THIGH_TWIST_1_R,

	//IK types ignored

	//Final Entry for bone count/enumeration testing, never place an entry after this one
	BONES_COUNT
};