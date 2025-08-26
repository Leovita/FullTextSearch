#ifndef org_apache_lucene_collation_CollationDocValuesField_H
#define org_apache_lucene_collation_CollationDocValuesField_H

#include "org/apache/lucene/document/Field.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
  namespace text {
    class Collator;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace collation {

        class CollationDocValuesField : public ::org::apache::lucene::document::Field {
         public:
          enum {
            mid_init$_32f7bd0207c369a0,
            mid_name_e7df854526d67fa3,
            mid_setStringValue_ee46a189998009d6,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit CollationDocValuesField(jobject obj) : ::org::apache::lucene::document::Field(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          CollationDocValuesField(const CollationDocValuesField& obj) : ::org::apache::lucene::document::Field(obj) {}

          CollationDocValuesField(const ::java::lang::String &, const ::java::text::Collator &);

          ::java::lang::String name() const;
          void setStringValue(const ::java::lang::String &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace collation {
        extern PyType_Def PY_TYPE_DEF(CollationDocValuesField);
        extern PyTypeObject *PY_TYPE(CollationDocValuesField);

        class t_CollationDocValuesField {
        public:
          PyObject_HEAD
          CollationDocValuesField object;
          static PyObject *wrap_Object(const CollationDocValuesField&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
