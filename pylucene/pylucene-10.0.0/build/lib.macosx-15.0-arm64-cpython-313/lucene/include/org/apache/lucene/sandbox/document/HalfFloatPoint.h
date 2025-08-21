#ifndef org_apache_lucene_sandbox_document_HalfFloatPoint_H
#define org_apache_lucene_sandbox_document_HalfFloatPoint_H

#include "org/apache/lucene/document/Field.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Query;
      }
      namespace util {
        class BytesRef;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Float;
    class String;
    class Class;
    class Number;
  }
  namespace util {
    class Collection;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace sandbox {
        namespace document {

          class HalfFloatPoint : public ::org::apache::lucene::document::Field {
           public:
            enum {
              mid_init$_9f83491e7d10ff68,
              mid_decodeDimension_36f1bada9977eb97,
              mid_encodeDimension_c76b280dd4a5e2c5,
              mid_halfFloatToSortableShort_6bdf05613323e5cd,
              mid_newExactQuery_bcda6f27d927f58d,
              mid_newRangeQuery_297c8e38e6ab41fe,
              mid_newRangeQuery_e6e7dae2179dd4df,
              mid_newSetQuery_6614d99324241fad,
              mid_newSetQuery_9484176e9ce4ba1f,
              mid_nextDown_8fa359a2bc20a127,
              mid_nextUp_8fa359a2bc20a127,
              mid_numericValue_1b3282bb4db06655,
              mid_setBytesValue_ac0de3ee0e03786d,
              mid_setFloatValue_c771a95b0227fb6a,
              mid_setFloatValues_354df523028ef700,
              mid_sortableShortToHalfFloat_b676884bea1176d7,
              mid_toString_09a7afff1868fc5e,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit HalfFloatPoint(jobject obj) : ::org::apache::lucene::document::Field(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            HalfFloatPoint(const HalfFloatPoint& obj) : ::org::apache::lucene::document::Field(obj) {}

            static jint BYTES;

            HalfFloatPoint(const ::java::lang::String &, const JArray< jfloat > &);

            static jfloat decodeDimension(const JArray< jbyte > &, jint);
            static void encodeDimension(jfloat, const JArray< jbyte > &, jint);
            static jshort halfFloatToSortableShort(jfloat);
            static ::org::apache::lucene::search::Query newExactQuery(const ::java::lang::String &, jfloat);
            static ::org::apache::lucene::search::Query newRangeQuery(const ::java::lang::String &, const JArray< jfloat > &, const JArray< jfloat > &);
            static ::org::apache::lucene::search::Query newRangeQuery(const ::java::lang::String &, jfloat, jfloat);
            static ::org::apache::lucene::search::Query newSetQuery(const ::java::lang::String &, const JArray< jfloat > &);
            static ::org::apache::lucene::search::Query newSetQuery(const ::java::lang::String &, const ::java::util::Collection &);
            static jfloat nextDown(jfloat);
            static jfloat nextUp(jfloat);
            ::java::lang::Number numericValue() const;
            void setBytesValue(const ::org::apache::lucene::util::BytesRef &) const;
            void setFloatValue(jfloat) const;
            void setFloatValues(const JArray< jfloat > &) const;
            static jfloat sortableShortToHalfFloat(jshort);
            ::java::lang::String toString() const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace sandbox {
        namespace document {
          extern PyType_Def PY_TYPE_DEF(HalfFloatPoint);
          extern PyTypeObject *PY_TYPE(HalfFloatPoint);

          class t_HalfFloatPoint {
          public:
            PyObject_HEAD
            HalfFloatPoint object;
            static PyObject *wrap_Object(const HalfFloatPoint&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
