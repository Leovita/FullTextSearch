#ifndef org_apache_lucene_search_suggest_fst_ExternalRefSorter_H
#define org_apache_lucene_search_suggest_fst_ExternalRefSorter_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
        class OfflineSorter;
      }
      namespace search {
        namespace suggest {
          namespace fst {
            class BytesRefSorter;
            class ExternalRefSorter$ByteSequenceIterator;
          }
        }
      }
    }
  }
}
namespace java {
  namespace io {
    class IOException;
    class Closeable;
  }
  namespace lang {
    class Class;
  }
  namespace util {
    class Comparator;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace suggest {
          namespace fst {

            class ExternalRefSorter : public ::java::lang::Object {
             public:
              enum {
                mid_init$_7ebd9f62ac88a825,
                mid_add_ac0de3ee0e03786d,
                mid_close_3720c61b0679eb3e,
                mid_getComparator_39238840448c1807,
                mid_iterator_1f81cd071208a331,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit ExternalRefSorter(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              ExternalRefSorter(const ExternalRefSorter& obj) : ::java::lang::Object(obj) {}

              ExternalRefSorter(const ::org::apache::lucene::util::OfflineSorter &);

              void add(const ::org::apache::lucene::util::BytesRef &) const;
              void close() const;
              ::java::util::Comparator getComparator() const;
              ::org::apache::lucene::search::suggest::fst::ExternalRefSorter$ByteSequenceIterator iterator() const;
            };
          }
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace suggest {
          namespace fst {
            extern PyType_Def PY_TYPE_DEF(ExternalRefSorter);
            extern PyTypeObject *PY_TYPE(ExternalRefSorter);

            class t_ExternalRefSorter {
            public:
              PyObject_HEAD
              ExternalRefSorter object;
              static PyObject *wrap_Object(const ExternalRefSorter&);
              static PyObject *wrap_jobject(const jobject&);
              static void install(PyObject *module);
              static void initialize(PyObject *module);
            };
          }
        }
      }
    }
  }
}

#endif
