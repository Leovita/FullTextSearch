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
            mid_init$_3720c61b0679eb3e,
            mid_add_1a55a4e4d8cc0afc,
            mid_clear_3720c61b0679eb3e,
            mid_get_cb0eb1432185fc94,
            mid_getBinaryValue_3011ce0425f8c75b,
            mid_getBinaryValues_8c2c73cdc9cfd998,
            mid_getField_a842f7b390300ce6,
            mid_getFields_36830460e10839eb,
            mid_getFields_c529667c261651df,
            mid_getValues_a06e92f371939b0b,
            mid_iterator_0db4c76ff7ee995b,
            mid_removeField_0d82408c6e55bc30,
            mid_removeFields_0d82408c6e55bc30,
            mid_toString_09a7afff1868fc5e,
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
