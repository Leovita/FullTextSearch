#ifndef org_apache_lucene_search_suggest_fst_ExternalRefSorter_H
#define org_apache_lucene_search_suggest_fst_ExternalRefSorter_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class Closeable;
    class IOException;
  }
  namespace lang {
    class Class;
  }
  namespace util {
    class Comparator;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class OfflineSorter;
        class BytesRef;
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
                mid_init$_43c5c0e986ba2187,
                mid_add_920ce0cdf4259cc9,
                mid_close_e7bdbe105ce1bafb,
                mid_getComparator_5cc89c689cd941fe,
                mid_iterator_636367afba53711a,
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
