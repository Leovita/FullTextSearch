#ifndef org_apache_lucene_search_SynonymQuery$Builder_H
#define org_apache_lucene_search_SynonymQuery$Builder_H

#include "java/lang/Object.h"

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
        class SynonymQuery;
        class SynonymQuery$Builder;
      }
      namespace index {
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
      namespace search {

        class SynonymQuery$Builder : public ::java::lang::Object {
         public:
          enum {
            mid_init$_ee46a189998009d6,
            mid_addTerm_9573b0ccf0170adc,
            mid_addTerm_f8af1754d5c7fc6e,
            mid_addTerm_b9890532dfa4659c,
            mid_build_f977f6df77747238,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit SynonymQuery$Builder(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          SynonymQuery$Builder(const SynonymQuery$Builder& obj) : ::java::lang::Object(obj) {}

          SynonymQuery$Builder(const ::java::lang::String &);

          SynonymQuery$Builder addTerm(const ::org::apache::lucene::index::Term &) const;
          SynonymQuery$Builder addTerm(const ::org::apache::lucene::index::Term &, jfloat) const;
          SynonymQuery$Builder addTerm(const ::org::apache::lucene::util::BytesRef &, jfloat) const;
          ::org::apache::lucene::search::SynonymQuery build() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        extern PyType_Def PY_TYPE_DEF(SynonymQuery$Builder);
        extern PyTypeObject *PY_TYPE(SynonymQuery$Builder);

        class t_SynonymQuery$Builder {
        public:
          PyObject_HEAD
          SynonymQuery$Builder object;
          static PyObject *wrap_Object(const SynonymQuery$Builder&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
