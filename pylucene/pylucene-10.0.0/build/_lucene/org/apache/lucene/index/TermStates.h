#ifndef org_apache_lucene_index_TermStates_H
#define org_apache_lucene_index_TermStates_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class IndexReaderContext;
        class Term;
        class TermStates;
        class TermState;
        class LeafReaderContext;
      }
      namespace util {
        class IOSupplier;
      }
      namespace search {
        class IndexSearcher;
      }
    }
  }
}
namespace java {
  namespace io {
    class IOException;
  }
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

        class TermStates : public ::java::lang::Object {
         public:
          enum {
            mid_init$_26d88823abec6e31,
            mid_init$_0eed2271e870f995,
            mid_accumulateStatistics_52c53d6e59b40db2,
            mid_build_28fd64b13065d068,
            mid_clear_3720c61b0679eb3e,
            mid_docFreq_20fbf7565993c3d7,
            mid_get_7b27badc76184417,
            mid_register_ec5c8c6b52a26f9e,
            mid_register_34c154b95aa8532d,
            mid_toString_09a7afff1868fc5e,
            mid_totalTermFreq_16939d9d0a9a9721,
            mid_wasBuiltFor_fc286b897ca8d8aa,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit TermStates(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          TermStates(const TermStates& obj) : ::java::lang::Object(obj) {}

          TermStates(const ::org::apache::lucene::index::IndexReaderContext &);
          TermStates(const ::org::apache::lucene::index::IndexReaderContext &, const ::org::apache::lucene::index::TermState &, jint, jint, jlong);

          void accumulateStatistics(jint, jlong) const;
          static TermStates build(const ::org::apache::lucene::search::IndexSearcher &, const ::org::apache::lucene::index::Term &, jboolean);
          void clear() const;
          jint docFreq() const;
          ::org::apache::lucene::util::IOSupplier get(const ::org::apache::lucene::index::LeafReaderContext &) const;
          void register$(const ::org::apache::lucene::index::TermState &, jint) const;
          void register$(const ::org::apache::lucene::index::TermState &, jint, jint, jlong) const;
          ::java::lang::String toString() const;
          jlong totalTermFreq() const;
          jboolean wasBuiltFor(const ::org::apache::lucene::index::IndexReaderContext &) const;
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
        extern PyType_Def PY_TYPE_DEF(TermStates);
        extern PyTypeObject *PY_TYPE(TermStates);

        class t_TermStates {
        public:
          PyObject_HEAD
          TermStates object;
          static PyObject *wrap_Object(const TermStates&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
