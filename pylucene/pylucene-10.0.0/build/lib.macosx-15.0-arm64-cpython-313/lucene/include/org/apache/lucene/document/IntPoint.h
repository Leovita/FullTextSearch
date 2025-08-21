#ifndef org_apache_lucene_document_IntPoint_H
#define org_apache_lucene_document_IntPoint_H

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
    class Integer;
    class Class;
    class String;
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
      namespace document {

        class IntPoint : public ::org::apache::lucene::document::Field {
         public:
          enum {
            mid_init$_60de00e27ec08a91,
            mid_decodeDimension_ed6f790242489170,
            mid_encodeDimension_0922bf48b8e1692d,
            mid_newExactQuery_f6c055cd1516634d,
            mid_newRangeQuery_c107d1b8f0b8d4e3,
            mid_newRangeQuery_7938124443e4ab73,
            mid_newSetQuery_abd436110bd94118,
            mid_newSetQuery_9484176e9ce4ba1f,
            mid_numericValue_1b3282bb4db06655,
            mid_pack_db74a7086d375804,
            mid_setBytesValue_ac0de3ee0e03786d,
            mid_setIntValue_540b2b23d51b1efd,
            mid_setIntValues_143c0cd4e297ef70,
            mid_toString_09a7afff1868fc5e,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit IntPoint(jobject obj) : ::org::apache::lucene::document::Field(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          IntPoint(const IntPoint& obj) : ::org::apache::lucene::document::Field(obj) {}

          IntPoint(const ::java::lang::String &, const JArray< jint > &);

          static jint decodeDimension(const JArray< jbyte > &, jint);
          static void encodeDimension(jint, const JArray< jbyte > &, jint);
          static ::org::apache::lucene::search::Query newExactQuery(const ::java::lang::String &, jint);
          static ::org::apache::lucene::search::Query newRangeQuery(const ::java::lang::String &, const JArray< jint > &, const JArray< jint > &);
          static ::org::apache::lucene::search::Query newRangeQuery(const ::java::lang::String &, jint, jint);
          static ::org::apache::lucene::search::Query newSetQuery(const ::java::lang::String &, const JArray< jint > &);
          static ::org::apache::lucene::search::Query newSetQuery(const ::java::lang::String &, const ::java::util::Collection &);
          ::java::lang::Number numericValue() const;
          static ::org::apache::lucene::util::BytesRef pack(const JArray< jint > &);
          void setBytesValue(const ::org::apache::lucene::util::BytesRef &) const;
          void setIntValue(jint) const;
          void setIntValues(const JArray< jint > &) const;
          ::java::lang::String toString() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace document {
        extern PyType_Def PY_TYPE_DEF(IntPoint);
        extern PyTypeObject *PY_TYPE(IntPoint);

        class t_IntPoint {
        public:
          PyObject_HEAD
          IntPoint object;
          static PyObject *wrap_Object(const IntPoint&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
