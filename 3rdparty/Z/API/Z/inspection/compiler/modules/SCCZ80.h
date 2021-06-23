/* Z Kit - inspection/modules/compiler/SCCZ80.h
 _____  _______________
/_   /_/  -_/_   _/  _ |
 /____/\___/ /__//___/_| Kit
Copyright (C) 2006-2018 Manuel Sainz de Baranda y Goñi.
Released under the terms of the GNU Lesser General Public License v3. */

#ifndef _Z_inspection_modules_compiler_SCCZ80_H_
#define _Z_inspection_modules_compiler_SCCZ80_H_

#include <Z/macros/version.h>

/* MARK: - Identification */

#define Z_COMPILER	  Z_COMPILER_SCCZ80
#define Z_COMPILER_STRING Z_COMPILER_STRING_SCCZ80

/*#define Z_COMPILER_VERSION*/
/*#define Z_COMPILER_VERSION_STRING*/

/* MARK: - CPU */

#define Z_COMPILER_CPU_ARCHITECTURE Z_CPU_ARCHITECTURE_Z80

/* MARK: - CPU endianness */

#define Z_COMPIER_CPU_INTEGER_ENDIANNESS Z_ENDIANNESS_LITTLE

/*#define Z_COMPIER_CPU_INTEGER_ENDIANNESS_8BIT*/
/*#define Z_COMPIER_CPU_INTEGER_ENDIANNESS_16BIT*/
/*#define Z_COMPIER_CPU_INTEGER_ENDIANNESS_32BIT*/
/*#define Z_COMPIER_CPU_INTEGER_ENDIANNESS_64BIT*/
/*#define Z_COMPIER_CPU_INTEGER_ENDIANNESS_128BIT*/

/* MARK: - Bit field order */

/*#define Z_COMPILER_BIT_FIELD_ORDER*/
/*#define Z_COMPILER_BIT_FIELD_ORDER_8BIT*/
/*#define Z_COMPILER_BIT_FIELD_ORDER_16BIT*/
/*#define Z_COMPILER_BIT_FIELD_ORDER_32BIT*/
/*#define Z_COMPILER_BIT_FIELD_ORDER_64BIT*/
/*#define Z_COMPILER_BIT_FIELD_ORDER_128BIT*/

/* MARK: - OS */

/*#define Z_COMPIER_OS*/

/* MARK: - Data model */

/*#define Z_COMPILER_DATA_MODEL*/

/* MARK: - K&R C support */

#define Z_COMPILER_C_HAS_OPERATOR_SIZE_OF     TRUE
#define Z_COMPILER_C_HAS_STORAGE_CLASS_EXTERN TRUE
#define Z_COMPILER_C_HAS_STORAGE_CLASS_STATIC TRUE

/*#define Z_COMPILER_C_HAS_STORAGE_CLASS_AUTO*/
/*#define Z_COMPILER_C_HAS_STORAGE_CLASS_REGISTER*/
/*#define Z_COMPILER_C_HAS_TYPE_FLOAT*/
/*#define Z_COMPILER_C_HAS_TYPE_DOUBLE*/

/* MARK: - C89 support */

#define Z_COMPILER_C_HAS_ENUMERATION		 TRUE
#define Z_COMPILER_C_HAS_VOID_POINTER		 TRUE
#define Z_COMPILER_C_HAS_TYPE_QUALIFIER_CONSTANT TRUE
#define Z_COMPILER_C_HAS_TYPE_QUALIFIER_VOLATILE TRUE

/*#define Z_COMPILER_C_HAS_TYPE_LDOUBLE*/

/* MARK: - C90 support */

/* MARK: - C94 support */

/*#define Z_COMPILER_C_HAS_DIGRAPHS*/

/* MARK: - C99 support */

/*#define Z_COMPILER_C_HAS_COMPOUND_LITERAL*/
/*#define Z_COMPILER_C_HAS_CPP_STYLE_COMMENT*/
/*#define Z_COMPILER_C_HAS_DESIGNATED_INITIALIZER*/
/*#define Z_COMPILER_C_HAS_FLEXIBLE_ARRAY_MEMBER*/
/*#define Z_COMPILER_C_HAS_INLINE_FUNCION*/
/*#define Z_COMPILER_C_HAS_MIXED_DECLARATIONS_AND_CODE*/
/*#define Z_COMPILER_C_HAS_NON_CONSTANT_AGGREGATE_INITIALIZER*/
/*#define Z_COMPILER_C_HAS_PREPROCESSOR_ARITHMETIC_DONE_IN_MAXIMUM_INTEGRAL*/
/*#define Z_COMPILER_C_HAS_VARIADIC_MACRO*/
/*#define Z_COMPILER_C_HAS_VLA*/
/*#define Z_COMPILER_C_HAS_MAGIC_CONSTANT_FUNCTION_NAME*/
/*#define Z_COMPILER_C_HAS_SPECIFIER_INLINE*/
/*#define Z_COMPILER_C_HAS_TYPE_BOOLEAN*/
/*#define Z_COMPILER_C_HAS_TYPE_LLONG*/
/*#define Z_COMPILER_C_HAS_TYPE_QUALIFIER_RESTRICT*/

/* MARK: - C11 support */

/*#define Z_COMPILER_C_HAS_ANONYMOUS_STRUCTURE*/
/*#define Z_COMPILER_C_HAS_ANONYMOUS_UNION*/
/*#define Z_COMPILER_C_HAS_ATOMIC_OPERATIONS*/
/*#define Z_COMPILER_C_HAS_GENERIC_SELECTION*/
/*#define Z_COMPILER_C_HAS_STATIC_ASSERTION*/
/*#define Z_COMPILER_C_HAS_OPERATOR_ALIGN_OF*/
/*#define Z_COMPILER_C_HAS_SPECIFIER_ALIGN_AS*/
/*#define Z_COMPILER_C_HAS_SPECIFIER_ATOMIC*/
/*#define Z_COMPILER_C_HAS_SPECIFIER_NO_RETURN*/
/*#define Z_COMPILER_C_HAS_STORATE_CLASS_THREAD_LOCAL*/
/*#define Z_COMPILER_C_HAS_TYPE_QUALIFIER_ATOMIC*/

/* MARK: - C18 support */

/* MARK: - Apple C extensions support */

/*#define Z_COMPILER_C_HAS_CLOSURE*/

/* MARK: - Attributes */

/*#define Z_COMPILER_ATTRIBUTE_ALIAS*/
/*#define Z_COMPILER_ATTRIBUTE_API*/
/*#define Z_COMPILER_ATTRIBUTE_API_ALIAS*/
/*#define Z_COMPILER_ATTRIBUTE_API_EXPORT*/
/*#define Z_COMPILER_ATTRIBUTE_API_EXPORT_ALIAS*/
/*#define Z_COMPILER_ATTRIBUTE_API_WEAK_EXPORT*/
/*#define Z_COMPILER_ATTRIBUTE_EBCO*/
/*#define Z_COMPILER_ATTRIBUTE_INLINE*/
/*#define Z_COMPILER_ATTRIBUTE_NO_RETURN*/
/*#define Z_COMPILER_ATTRIBUTE_NULL_TERMINATED*/
/*#define Z_COMPILER_ATTRIBUTE_PRIVATE*/
/*#define Z_COMPILER_ATTRIBUTE_PUBLIC*/
/*#define Z_COMPILER_ATTRIBUTE_STRICT_SIZE_BEGIN*/
/*#define Z_COMPILER_ATTRIBUTE_STRICT_SIZE_END*/
/*#define Z_COMPILER_ATTRIBUTE_THREAD_LOCAL*/
/*#define Z_COMPILER_ATTRIBUTE_WEAK*/

/* MARK: - Built-in constants */

/*#define Z_COMPILER_CONSTANT_FLOAT16_INFINITY*/
/*#define Z_COMPILER_CONSTANT_FLOAT16_NAN*/
/*#define Z_COMPILER_CONSTANT_FLOAT32_INFINITY*/
/*#define Z_COMPILER_CONSTANT_FLOAT32_NAN*/
/*#define Z_COMPILER_CONSTANT_FLOAT64_INFINITY*/
/*#define Z_COMPILER_CONSTANT_FLOAT64_NAN*/
/*#define Z_COMPILER_CONSTANT_FLOAT128_INFINITY*/
/*#define Z_COMPILER_CONSTANT_FLOAT128_NAN*/
/*#define Z_COMPILER_CONSTANT_FLOAT80_X87_INFINITY*/
/*#define Z_COMPILER_CONSTANT_FLOAT80_X87_NAN*/
/*#define Z_COMPILER_CONSTANT_FLOAT96_X87_INFINITY*/
/*#define Z_COMPILER_CONSTANT_FLOAT96_X87_NAN*/
/*#define Z_COMPILER_CONSTANT_FLOAT128_X87_INFINITY*/
/*#define Z_COMPILER_CONSTANT_FLOAT128_X87_NAN*/
/*#define Z_COMPILER_CONSTANT_UCHAR_BITS*/
/*#define Z_COMPILER_CONSTANT_UCHAR_SIZE*/
/*#define Z_COMPILER_CONSTANT_UCHAR_MAXIMUM*/
/*#define Z_COMPILER_CONSTANT_USHORT_BITS*/
/*#define Z_COMPILER_CONSTANT_USHORT_SIZE*/
/*#define Z_COMPILER_CONSTANT_USHORT_MAXIMUM*/
/*#define Z_COMPILER_CONSTANT_UINT_BITS*/
/*#define Z_COMPILER_CONSTANT_UINT_SIZE*/
/*#define Z_COMPILER_CONSTANT_UINT_MAXIMUM*/
/*#define Z_COMPILER_CONSTANT_ULONG_BITS*/
/*#define Z_COMPILER_CONSTANT_ULONG_SIZE*/
/*#define Z_COMPILER_CONSTANT_ULONG_MAXIMUM*/
/*#define Z_COMPILER_CONSTANT_ULLONG_BITS*/
/*#define Z_COMPILER_CONSTANT_ULLONG_SIZE*/
/*#define Z_COMPILER_CONSTANT_ULLONG_MAXIMUM*/
/*#define Z_COMPILER_CONSTANT_SCHAR_BITS*/
/*#define Z_COMPILER_CONSTANT_SCHAR_SIZE*/
/*#define Z_COMPILER_CONSTANT_SCHAR_MINIMUM*/
/*#define Z_COMPILER_CONSTANT_SCHAR_MAXIMUM*/
/*#define Z_COMPILER_CONSTANT_SSHORT_BITS*/
/*#define Z_COMPILER_CONSTANT_SSHORT_SIZE*/
/*#define Z_COMPILER_CONSTANT_SSHORT_MINIMUM*/
/*#define Z_COMPILER_CONSTANT_SSHORT_MAXIMUM*/
/*#define Z_COMPILER_CONSTANT_SINT_BITS*/
/*#define Z_COMPILER_CONSTANT_SINT_SIZE*/
/*#define Z_COMPILER_CONSTANT_SINT_MINIMUM*/
/*#define Z_COMPILER_CONSTANT_SINT_MAXIMUM*/
/*#define Z_COMPILER_CONSTANT_SLONG_BITS*/
/*#define Z_COMPILER_CONSTANT_SLONG_SIZE*/
/*#define Z_COMPILER_CONSTANT_SLONG_MINIMUM*/
/*#define Z_COMPILER_CONSTANT_SLONG_MAXIMUM*/
/*#define Z_COMPILER_CONSTANT_SLLONG_BITS*/
/*#define Z_COMPILER_CONSTANT_SLLONG_SIZE*/
/*#define Z_COMPILER_CONSTANT_SLLONG_MINIMUM*/
/*#define Z_COMPILER_CONSTANT_SLLONG_MAXIMUM*/
/*#define Z_COMPILER_CONSTANT_FLOAT_BITS*/
/*#define Z_COMPILER_CONSTANT_FLOAT_SIZE*/
/*#define Z_COMPILER_CONSTANT_FLOAT_INFINITY*/
/*#define Z_COMPILER_CONSTANT_FLOAT_NAN*/
/*#define Z_COMPILER_CONSTANT_DOUBLE_BITS*/
/*#define Z_COMPILER_CONSTANT_DOUBLE_SIZE*/
/*#define Z_COMPILER_CONSTANT_DOUBLE_INFINITY*/
/*#define Z_COMPILER_CONSTANT_DOUBLE_NAN*/
/*#define Z_COMPILER_CONSTANT_LDOUBLE_BITS*/
/*#define Z_COMPILER_CONSTANT_LDOUBLE_SIZE*/
/*#define Z_COMPILER_CONSTANT_LDOUBLE_INFINITY*/
/*#define Z_COMPILER_CONSTANT_LDOUBLE_NAN*/
/*#define Z_COMPILER_CONSTANT_USIZE_BITS*/
/*#define Z_COMPILER_CONSTANT_USIZE_SIZE*/
/*#define Z_COMPILER_CONSTANT_SSIZE_BITS*/
/*#define Z_COMPILER_CONSTANT_SSIZE_SIZE*/
/*#define Z_COMPILER_CONSTANT_POINTER_BITS*/
/*#define Z_COMPILER_CONSTANT_POINTER_SIZE*/

/* MARK: - Built-in magic constants */

/*#define Z_COMPILER_MAGIC_CONSTANT_MANGLED_FUNCTION_NAME*/

/* MARK: - Built-in macros: Struture */

#define Z_COMPILER_MACRO_OFFSET_OF __builtin_offsetof

/* MARK: - Built-in macros: VAL */

/*#define Z_COMPILER_MACRO_VAL_INITIALIZE(object, last_parameter)*/
/*#define Z_COMPILER_MACRO_VAL_FINALIZE(object)*/
/*#define Z_COMPILER_MACRO_VAL_READ(object, type)*/
/*#define Z_COMPILER_MACRO_VAL_COPY(object, output)*/

/* MARK: - Built-in types */

/*#define Z_COMPILER_TYPE_UINT8*/
/*#define Z_COMPILER_TYPE_UINT16*/
/*#define Z_COMPILER_TYPE_UINT32*/
/*#define Z_COMPILER_TYPE_UINT64*/
/*#define Z_COMPILER_TYPE_UINT128*/
/*#define Z_COMPILER_TYPE_SINT8*/
/*#define Z_COMPILER_TYPE_SINT16*/
/*#define Z_COMPILER_TYPE_SINT32*/
/*#define Z_COMPILER_TYPE_SINT64*/
/*#define Z_COMPILER_TYPE_SINT128*/
/*#define Z_COMPILER_TYPE_FLOAT16*/
/*#define Z_COMPILER_TYPE_FLOAT64*/
/*#define Z_COMPILER_TYPE_FLOAT128*/
/*#define Z_COMPILER_TYPE_FLOAT80_X87*/
/*#define Z_COMPILER_TYPE_FLOAT96_X87*/
/*#define Z_COMPILER_TYPE_FLOAT128_X87*/

/*#define Z_COMPILER_TYPE_VAL*/

/* MARK: - Suffix macros for built-in types */

/*#define Z_COMPILER_LITERAL_UINT8*/
/*#define Z_COMPILER_LITERAL_UINT16*/
/*#define Z_COMPILER_LITERAL_UINT32*/
/*#define Z_COMPILER_LITERAL_UINT64*/
/*#define Z_COMPILER_LITERAL_UINT128*/
/*#define Z_COMPILER_LITERAL_SINT8*/
/*#define Z_COMPILER_LITERAL_SINT16*/
/*#define Z_COMPILER_LITERAL_SINT32*/
/*#define Z_COMPILER_LITERAL_SINT64*/
/*#define Z_COMPILER_LITERAL_SINT128*/
/*#define Z_COMPILER_LITERAL_FLOAT16*/
/*#define Z_COMPILER_LITERAL_FLOAT32*/
/*#define Z_COMPILER_LITERAL_FLOAT64*/
/*#define Z_COMPILER_LITERAL_FLOAT128*/
/*#define Z_COMPILER_LITERAL_FLOAT80_X87*/
/*#define Z_COMPILER_LITERAL_FLOAT96_X87*/
/*#define Z_COMPILER_LITERAL_FLOAT128_X87*/

/* MARK: - Built-in functions: Atomic operations */

/*#define Z_COMPILER_FUNCTION_UINT8_ATOMIC_ADD_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_UINT8_ATOMIC_AND_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_UINT8_ATOMIC_DECREMENT_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_UINT8_ATOMIC_GET_THEN_ADD*/
/*#define Z_COMPILER_FUNCTION_UINT8_ATOMIC_GET_THEN_AND*/
/*#define Z_COMPILER_FUNCTION_UINT8_ATOMIC_GET_THEN_DECREMENT*/
/*#define Z_COMPILER_FUNCTION_UINT8_ATOMIC_GET_THEN_INCREMENT*/
/*#define Z_COMPILER_FUNCTION_UINT8_ATOMIC_GET_THEN_NAND*/
/*#define Z_COMPILER_FUNCTION_UINT8_ATOMIC_GET_THEN_NOT*/
/*#define Z_COMPILER_FUNCTION_UINT8_ATOMIC_GET_THEN_OR*/
/*#define Z_COMPILER_FUNCTION_UINT8_ATOMIC_GET_THEN_SET*/
/*#define Z_COMPILER_FUNCTION_UINT8_ATOMIC_GET_THEN_SUBTRACT*/
/*#define Z_COMPILER_FUNCTION_UINT8_ATOMIC_GET_THEN_XOR*/
/*#define Z_COMPILER_FUNCTION_UINT8_ATOMIC_INCREMENT_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_UINT8_ATOMIC_NAND_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_UINT8_ATOMIC_NOT_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_UINT8_ATOMIC_OR_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_UINT8_ATOMIC_SET_IF_EQUAL*/
/*#define Z_COMPILER_FUNCTION_UINT8_ATOMIC_SUBTRACT_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_UINT8_ATOMIC_XOR_THEN_GET*/

/*#define Z_COMPILER_FUNCTION_UINT16_ATOMIC_ADD_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_UINT16_ATOMIC_AND_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_UINT16_ATOMIC_DECREMENT_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_UINT16_ATOMIC_GET_THEN_ADD*/
/*#define Z_COMPILER_FUNCTION_UINT16_ATOMIC_GET_THEN_AND*/
/*#define Z_COMPILER_FUNCTION_UINT16_ATOMIC_GET_THEN_DECREMENT*/
/*#define Z_COMPILER_FUNCTION_UINT16_ATOMIC_GET_THEN_INCREMENT*/
/*#define Z_COMPILER_FUNCTION_UINT16_ATOMIC_GET_THEN_NAND*/
/*#define Z_COMPILER_FUNCTION_UINT16_ATOMIC_GET_THEN_NOT*/
/*#define Z_COMPILER_FUNCTION_UINT16_ATOMIC_GET_THEN_OR*/
/*#define Z_COMPILER_FUNCTION_UINT16_ATOMIC_GET_THEN_SET*/
/*#define Z_COMPILER_FUNCTION_UINT16_ATOMIC_GET_THEN_SUBTRACT*/
/*#define Z_COMPILER_FUNCTION_UINT16_ATOMIC_GET_THEN_XOR*/
/*#define Z_COMPILER_FUNCTION_UINT16_ATOMIC_INCREMENT_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_UINT16_ATOMIC_NAND_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_UINT16_ATOMIC_NOT_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_UINT16_ATOMIC_OR_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_UINT16_ATOMIC_SET_IF_EQUAL*/
/*#define Z_COMPILER_FUNCTION_UINT16_ATOMIC_SUBTRACT_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_UINT16_ATOMIC_XOR_THEN_GET*/

/*#define Z_COMPILER_FUNCTION_UINT32_ATOMIC_ADD_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_UINT32_ATOMIC_AND_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_UINT32_ATOMIC_DECREMENT_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_UINT32_ATOMIC_GET_THEN_ADD*/
/*#define Z_COMPILER_FUNCTION_UINT32_ATOMIC_GET_THEN_AND*/
/*#define Z_COMPILER_FUNCTION_UINT32_ATOMIC_GET_THEN_DECREMENT*/
/*#define Z_COMPILER_FUNCTION_UINT32_ATOMIC_GET_THEN_INCREMENT*/
/*#define Z_COMPILER_FUNCTION_UINT32_ATOMIC_GET_THEN_NAND*/
/*#define Z_COMPILER_FUNCTION_UINT32_ATOMIC_GET_THEN_NOT*/
/*#define Z_COMPILER_FUNCTION_UINT32_ATOMIC_GET_THEN_OR*/
/*#define Z_COMPILER_FUNCTION_UINT32_ATOMIC_GET_THEN_SET*/
/*#define Z_COMPILER_FUNCTION_UINT32_ATOMIC_GET_THEN_SUBTRACT*/
/*#define Z_COMPILER_FUNCTION_UINT32_ATOMIC_GET_THEN_XOR*/
/*#define Z_COMPILER_FUNCTION_UINT32_ATOMIC_INCREMENT_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_UINT32_ATOMIC_NAND_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_UINT32_ATOMIC_NOT_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_UINT32_ATOMIC_OR_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_UINT32_ATOMIC_SET_IF_EQUAL*/
/*#define Z_COMPILER_FUNCTION_UINT32_ATOMIC_SUBTRACT_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_UINT32_ATOMIC_XOR_THEN_GET*/

/*#define Z_COMPILER_FUNCTION_UINT64_ATOMIC_ADD_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_UINT64_ATOMIC_AND_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_UINT64_ATOMIC_DECREMENT_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_UINT64_ATOMIC_GET_THEN_ADD*/
/*#define Z_COMPILER_FUNCTION_UINT64_ATOMIC_GET_THEN_AND*/
/*#define Z_COMPILER_FUNCTION_UINT64_ATOMIC_GET_THEN_DECREMENT*/
/*#define Z_COMPILER_FUNCTION_UINT64_ATOMIC_GET_THEN_INCREMENT*/
/*#define Z_COMPILER_FUNCTION_UINT64_ATOMIC_GET_THEN_NAND*/
/*#define Z_COMPILER_FUNCTION_UINT64_ATOMIC_GET_THEN_NOT*/
/*#define Z_COMPILER_FUNCTION_UINT64_ATOMIC_GET_THEN_OR*/
/*#define Z_COMPILER_FUNCTION_UINT64_ATOMIC_GET_THEN_SET*/
/*#define Z_COMPILER_FUNCTION_UINT64_ATOMIC_GET_THEN_SUBTRACT*/
/*#define Z_COMPILER_FUNCTION_UINT64_ATOMIC_GET_THEN_XOR*/
/*#define Z_COMPILER_FUNCTION_UINT64_ATOMIC_INCREMENT_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_UINT64_ATOMIC_NAND_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_UINT64_ATOMIC_NOT_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_UINT64_ATOMIC_OR_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_UINT64_ATOMIC_SET_IF_EQUAL*/
/*#define Z_COMPILER_FUNCTION_UINT64_ATOMIC_SUBTRACT_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_UINT64_ATOMIC_XOR_THEN_GET*/

/*#define Z_COMPILER_FUNCTION_UINT128_ATOMIC_ADD_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_UINT128_ATOMIC_AND_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_UINT128_ATOMIC_DECREMENT_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_UINT128_ATOMIC_GET_THEN_ADD*/
/*#define Z_COMPILER_FUNCTION_UINT128_ATOMIC_GET_THEN_AND*/
/*#define Z_COMPILER_FUNCTION_UINT128_ATOMIC_GET_THEN_DECREMENT*/
/*#define Z_COMPILER_FUNCTION_UINT128_ATOMIC_GET_THEN_INCREMENT*/
/*#define Z_COMPILER_FUNCTION_UINT128_ATOMIC_GET_THEN_NAND*/
/*#define Z_COMPILER_FUNCTION_UINT128_ATOMIC_GET_THEN_NOT*/
/*#define Z_COMPILER_FUNCTION_UINT128_ATOMIC_GET_THEN_OR*/
/*#define Z_COMPILER_FUNCTION_UINT128_ATOMIC_GET_THEN_SET*/
/*#define Z_COMPILER_FUNCTION_UINT128_ATOMIC_GET_THEN_SUBTRACT*/
/*#define Z_COMPILER_FUNCTION_UINT128_ATOMIC_GET_THEN_XOR*/
/*#define Z_COMPILER_FUNCTION_UINT128_ATOMIC_INCREMENT_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_UINT128_ATOMIC_NAND_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_UINT128_ATOMIC_NOT_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_UINT128_ATOMIC_OR_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_UINT128_ATOMIC_SET_IF_EQUAL*/
/*#define Z_COMPILER_FUNCTION_UINT128_ATOMIC_SUBTRACT_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_UINT128_ATOMIC_XOR_THEN_GET*/

/*#define Z_COMPILER_FUNCTION_SINT8_ATOMIC_ADD_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_SINT8_ATOMIC_AND_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_SINT8_ATOMIC_DECREMENT_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_SINT8_ATOMIC_GET_THEN_ADD*/
/*#define Z_COMPILER_FUNCTION_SINT8_ATOMIC_GET_THEN_AND*/
/*#define Z_COMPILER_FUNCTION_SINT8_ATOMIC_GET_THEN_DECREMENT*/
/*#define Z_COMPILER_FUNCTION_SINT8_ATOMIC_GET_THEN_INCREMENT*/
/*#define Z_COMPILER_FUNCTION_SINT8_ATOMIC_GET_THEN_NAND*/
/*#define Z_COMPILER_FUNCTION_SINT8_ATOMIC_GET_THEN_NOT*/
/*#define Z_COMPILER_FUNCTION_SINT8_ATOMIC_GET_THEN_OR*/
/*#define Z_COMPILER_FUNCTION_SINT8_ATOMIC_GET_THEN_SET*/
/*#define Z_COMPILER_FUNCTION_SINT8_ATOMIC_GET_THEN_SUBTRACT*/
/*#define Z_COMPILER_FUNCTION_SINT8_ATOMIC_GET_THEN_XOR*/
/*#define Z_COMPILER_FUNCTION_SINT8_ATOMIC_INCREMENT_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_SINT8_ATOMIC_NAND_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_SINT8_ATOMIC_NOT_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_SINT8_ATOMIC_OR_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_SINT8_ATOMIC_SET_IF_EQUAL*/
/*#define Z_COMPILER_FUNCTION_SINT8_ATOMIC_SUBTRACT_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_SINT8_ATOMIC_XOR_THEN_GET*/

/*#define Z_COMPILER_FUNCTION_SINT16_ATOMIC_ADD_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_SINT16_ATOMIC_AND_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_SINT16_ATOMIC_DECREMENT_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_SINT16_ATOMIC_GET_THEN_ADD*/
/*#define Z_COMPILER_FUNCTION_SINT16_ATOMIC_GET_THEN_AND*/
/*#define Z_COMPILER_FUNCTION_SINT16_ATOMIC_GET_THEN_DECREMENT*/
/*#define Z_COMPILER_FUNCTION_SINT16_ATOMIC_GET_THEN_INCREMENT*/
/*#define Z_COMPILER_FUNCTION_SINT16_ATOMIC_GET_THEN_NAND*/
/*#define Z_COMPILER_FUNCTION_SINT16_ATOMIC_GET_THEN_NOT*/
/*#define Z_COMPILER_FUNCTION_SINT16_ATOMIC_GET_THEN_OR*/
/*#define Z_COMPILER_FUNCTION_SINT16_ATOMIC_GET_THEN_SET*/
/*#define Z_COMPILER_FUNCTION_SINT16_ATOMIC_GET_THEN_SUBTRACT*/
/*#define Z_COMPILER_FUNCTION_SINT16_ATOMIC_GET_THEN_XOR*/
/*#define Z_COMPILER_FUNCTION_SINT16_ATOMIC_INCREMENT_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_SINT16_ATOMIC_NAND_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_SINT16_ATOMIC_NOT_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_SINT16_ATOMIC_OR_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_SINT16_ATOMIC_SET_IF_EQUAL*/
/*#define Z_COMPILER_FUNCTION_SINT16_ATOMIC_SUBTRACT_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_SINT16_ATOMIC_XOR_THEN_GET*/

/*#define Z_COMPILER_FUNCTION_SINT32_ATOMIC_ADD_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_SINT32_ATOMIC_AND_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_SINT32_ATOMIC_DECREMENT_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_SINT32_ATOMIC_GET_THEN_ADD*/
/*#define Z_COMPILER_FUNCTION_SINT32_ATOMIC_GET_THEN_AND*/
/*#define Z_COMPILER_FUNCTION_SINT32_ATOMIC_GET_THEN_DECREMENT*/
/*#define Z_COMPILER_FUNCTION_SINT32_ATOMIC_GET_THEN_INCREMENT*/
/*#define Z_COMPILER_FUNCTION_SINT32_ATOMIC_GET_THEN_NAND*/
/*#define Z_COMPILER_FUNCTION_SINT32_ATOMIC_GET_THEN_NOT*/
/*#define Z_COMPILER_FUNCTION_SINT32_ATOMIC_GET_THEN_OR*/
/*#define Z_COMPILER_FUNCTION_SINT32_ATOMIC_GET_THEN_SET*/
/*#define Z_COMPILER_FUNCTION_SINT32_ATOMIC_GET_THEN_SUBTRACT*/
/*#define Z_COMPILER_FUNCTION_SINT32_ATOMIC_GET_THEN_XOR*/
/*#define Z_COMPILER_FUNCTION_SINT32_ATOMIC_INCREMENT_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_SINT32_ATOMIC_NAND_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_SINT32_ATOMIC_NOT_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_SINT32_ATOMIC_OR_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_SINT32_ATOMIC_SET_IF_EQUAL*/
/*#define Z_COMPILER_FUNCTION_SINT32_ATOMIC_SUBTRACT_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_SINT32_ATOMIC_XOR_THEN_GET*/

/*#define Z_COMPILER_FUNCTION_SINT64_ATOMIC_ADD_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_SINT64_ATOMIC_AND_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_SINT64_ATOMIC_DECREMENT_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_SINT64_ATOMIC_GET_THEN_ADD*/
/*#define Z_COMPILER_FUNCTION_SINT64_ATOMIC_GET_THEN_AND*/
/*#define Z_COMPILER_FUNCTION_SINT64_ATOMIC_GET_THEN_DECREMENT*/
/*#define Z_COMPILER_FUNCTION_SINT64_ATOMIC_GET_THEN_INCREMENT*/
/*#define Z_COMPILER_FUNCTION_SINT64_ATOMIC_GET_THEN_NAND*/
/*#define Z_COMPILER_FUNCTION_SINT64_ATOMIC_GET_THEN_NOT*/
/*#define Z_COMPILER_FUNCTION_SINT64_ATOMIC_GET_THEN_OR*/
/*#define Z_COMPILER_FUNCTION_SINT64_ATOMIC_GET_THEN_SET*/
/*#define Z_COMPILER_FUNCTION_SINT64_ATOMIC_GET_THEN_SUBTRACT*/
/*#define Z_COMPILER_FUNCTION_SINT64_ATOMIC_GET_THEN_XOR*/
/*#define Z_COMPILER_FUNCTION_SINT64_ATOMIC_INCREMENT_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_SINT64_ATOMIC_NAND_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_SINT64_ATOMIC_NOT_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_SINT64_ATOMIC_OR_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_SINT64_ATOMIC_SET_IF_EQUAL*/
/*#define Z_COMPILER_FUNCTION_SINT64_ATOMIC_SUBTRACT_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_SINT64_ATOMIC_XOR_THEN_GET*/

/*#define Z_COMPILER_FUNCTION_SINT128_ATOMIC_ADD_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_SINT128_ATOMIC_AND_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_SINT128_ATOMIC_DECREMENT_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_SINT128_ATOMIC_GET_THEN_ADD*/
/*#define Z_COMPILER_FUNCTION_SINT128_ATOMIC_GET_THEN_AND*/
/*#define Z_COMPILER_FUNCTION_SINT128_ATOMIC_GET_THEN_DECREMENT*/
/*#define Z_COMPILER_FUNCTION_SINT128_ATOMIC_GET_THEN_INCREMENT*/
/*#define Z_COMPILER_FUNCTION_SINT128_ATOMIC_GET_THEN_NAND*/
/*#define Z_COMPILER_FUNCTION_SINT128_ATOMIC_GET_THEN_NOT*/
/*#define Z_COMPILER_FUNCTION_SINT128_ATOMIC_GET_THEN_OR*/
/*#define Z_COMPILER_FUNCTION_SINT128_ATOMIC_GET_THEN_SET*/
/*#define Z_COMPILER_FUNCTION_SINT128_ATOMIC_GET_THEN_SUBTRACT*/
/*#define Z_COMPILER_FUNCTION_SINT128_ATOMIC_GET_THEN_XOR*/
/*#define Z_COMPILER_FUNCTION_SINT128_ATOMIC_INCREMENT_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_SINT128_ATOMIC_NAND_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_SINT128_ATOMIC_NOT_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_SINT128_ATOMIC_OR_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_SINT128_ATOMIC_SET_IF_EQUAL*/
/*#define Z_COMPILER_FUNCTION_SINT128_ATOMIC_SUBTRACT_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_SINT128_ATOMIC_XOR_THEN_GET*/

#endif /* _Z_inspection_modules_compiler_SCCZ80_H_ */