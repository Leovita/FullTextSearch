#ifndef org_apache_lucene_document_Document_H
#define org_apache_lucene_document_Document_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Iterator;
    class List;
  }
  namespace lang {
    class Class;
    class String;
    class Iterable;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class IndexableField;
      }
      namespace util {
        class BytesRef;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace document {

        class Document : public ::java::lang::Object {
         public:
          enum {
            mid_init$_e7bdbe105ce1bafb,
            mid_add_7da9efe51a6029d6,
            mid_clear_e7bdbe105ce1bafb,
            mid_get_fef9c036acf290a9,
            mid_getBinaryValue_40fe68acc0b1cd64,
            mid_getBinaryValues_8c018c1c908c075a,
            mid_getField_e82d0b00473121b0,
            mid_getFields_1387e1e2702ac173,
            mid_getFields_8f2a0a685e417f1f,
            mid_getValues_7b34cb521ce5d8ff,
            mid_iterator_c7985fafdcf40e83,
            mid_removeField_ee46a189998009d6,
            mid_removeFields_ee46a189998009d6,
            mid_toString_e7df854526d67fa3,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit Document(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          Document(const Document& obj) : ::java::lang::Object(obj) {}

          Document();

          void add(const ::org::apache::lucene::index::IndexableField &) const;
          void clear() const;
          ::java::lang::String get(const ::java::lang::String &) const;
          ::org::apache::lucene::util::BytesRef getBinaryValue(const ::java::lang::String &) const;
          JArray< ::org::apache::lucene::util::BytesRef > getBinaryValues(const ::java::lang::String &) const;
          ::org::apache::lucene::index::IndexableField getField(const ::java::lang::String &) const;
          ::java::util::List getFields() const;
          JArray< ::org::apache::lucene::index::IndexableField > getFields(const ::java::lang::String &) const;
          JArray< ::java::lang::String > getValues(const ::java::lang::String &) const;
          ::java::util::Iterator iterator() const;
          void removeField(const ::java::lang::String &) const;
          void removeFields(const ::java::lang::String &) const;
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
        extern PyType_Def PY_TYPE_DEF(Document);
        extern PyTypeObject *PY_TYPE(Document);

        class t_Document {
        public:
          PyObject_HEAD
          Document object;
          static PyObject *wrap_Object(const Document&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
