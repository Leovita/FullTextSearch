#ifndef org_apache_lucene_document_RangeFieldQuery$QueryType_H
#define org_apache_lucene_document_RangeFieldQuery$QueryType_H

#include "java/lang/Enum.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class ArrayUtil$ByteArrayComparator;
      }
      namespace document {
        class RangeFieldQuery$QueryType;
      }
    }
  }
}
namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace document {

        class RangeFieldQuery$QueryType : public ::java::lang::Enum {
         public:
          enum {
            mid_matches_ad83ec729288ee64,
            mid_valueOf_2845bf9d497f92eb,
            mid_values_4805ce309f2363e0,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit RangeFieldQuery$QueryType(jobject obj) : ::java::lang::Enum(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          RangeFieldQuery$QueryType(const RangeFieldQuery$QueryType& obj) : ::java::lang::Enum(obj) {}

          static RangeFieldQuery$QueryType *CONTAINS;
          static RangeFieldQuery$QueryType *CROSSES;
          static RangeFieldQuery$QueryType *INTERSECTS;
          static RangeFieldQuery$QueryType *WITHIN;

          jboolean matches(const JArray< jbyte > &, const JArray< jbyte > &, jint, jint, const ::org::apache::lucene::util::ArrayUtil$ByteArrayComparator &) const;
          static RangeFieldQuery$QueryType valueOf(const ::java::lang::String &);
          static JArray< RangeFieldQuery$QueryType > values();
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
        extern PyType_Def PY_TYPE_DEF(RangeFieldQuery$QueryType);
        extern PyTypeObject *PY_TYPE(RangeFieldQuery$QueryType);

        class t_RangeFieldQuery$QueryType {
        public:
          PyObject_HEAD
          RangeFieldQuery$QueryType object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_RangeFieldQuery$QueryType *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const RangeFieldQuery$QueryType&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const RangeFieldQuery$QueryType&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
