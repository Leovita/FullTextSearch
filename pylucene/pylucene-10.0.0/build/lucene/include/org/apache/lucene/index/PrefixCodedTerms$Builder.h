#ifndef org_apache_lucene_index_PrefixCodedTerms$Builder_H
#define org_apache_lucene_index_PrefixCodedTerms$Builder_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
    class String;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class PrefixCodedTerms;
        class Term;
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
      namespace index {

        class PrefixCodedTerms$Builder : public ::java::lang::Object {
         public:
          enum {
            mid_init$_e7bdbe105ce1bafb,
            mid_add_ed33f9e055f7213d,
            mid_add_a9a308f8485c52c9,
            mid_finish_47f3c307806189e0,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PrefixCodedTerms$Builder(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PrefixCodedTerms$Builder(const PrefixCodedTerms$Builder& obj) : ::java::lang::Object(obj) {}

          PrefixCodedTerms$Builder();

          void add(const ::org::apache::lucene::index::Term &) const;
          void add(const ::java::lang::String &, const ::org::apache::lucene::util::BytesRef &) const;
          ::org::apache::lucene::index::PrefixCodedTerms finish() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        extern PyType_Def PY_TYPE_DEF(PrefixCodedTerms$Builder);
        extern PyTypeObject *PY_TYPE(PrefixCodedTerms$Builder);

        class t_PrefixCodedTerms$Builder {
        public:
          PyObject_HEAD
          PrefixCodedTerms$Builder object;
          static PyObject *wrap_Object(const PrefixCodedTerms$Builder&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
