#ifndef org_apache_lucene_index_PrefixCodedTerms$Builder_H
#define org_apache_lucene_index_PrefixCodedTerms$Builder_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class Term;
        class PrefixCodedTerms;
      }
      namespace util {
        class BytesRef;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
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
            mid_init$_3720c61b0679eb3e,
            mid_add_3b0982cb6e1bfb9d,
            mid_add_45ab94acb6ed83e4,
            mid_finish_f6b680c28e00bf07,
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
