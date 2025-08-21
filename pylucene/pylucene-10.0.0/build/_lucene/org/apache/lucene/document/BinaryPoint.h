#ifndef org_apache_lucene_document_BinaryPoint_H
#define org_apache_lucene_document_BinaryPoint_H

#include "org/apache/lucene/document/Field.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Query;
      }
      namespace index {
        class IndexableFieldType;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace document {

        class BinaryPoint : public ::org::apache::lucene::document::Field {
         public:
          enum {
            mid_init$_94cb5fdf8a5255b9,
            mid_init$_a3febbf6875c2424,
            mid_newExactQuery_f340ad58a84b1399,
            mid_newRangeQuery_7c1af2ae4a99ab09,
            mid_newRangeQuery_1af301f5fafd5c7b,
            mid_newSetQuery_5b20425057963f07,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit BinaryPoint(jobject obj) : ::org::apache::lucene::document::Field(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          BinaryPoint(const BinaryPoint& obj) : ::org::apache::lucene::document::Field(obj) {}

          BinaryPoint(const ::java::lang::String &, const JArray< JArray< jbyte > > &);
          BinaryPoint(const ::java::lang::String &, const JArray< jbyte > &, const ::org::apache::lucene::index::IndexableFieldType &);

          static ::org::apache::lucene::search::Query newExactQuery(const ::java::lang::String &, const JArray< jbyte > &);
          static ::org::apache::lucene::search::Query newRangeQuery(const ::java::lang::String &, const JArray< jbyte > &, const JArray< jbyte > &);
          static ::org::apache::lucene::search::Query newRangeQuery(const ::java::lang::String &, const JArray< JArray< jbyte > > &, const JArray< JArray< jbyte > > &);
          static ::org::apache::lucene::search::Query newSetQuery(const ::java::lang::String &, const JArray< JArray< jbyte > > &);
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
        extern PyType_Def PY_TYPE_DEF(BinaryPoint);
        extern PyTypeObject *PY_TYPE(BinaryPoint);

        class t_BinaryPoint {
        public:
          PyObject_HEAD
          BinaryPoint object;
          static PyObject *wrap_Object(const BinaryPoint&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
