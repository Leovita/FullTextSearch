#ifndef org_apache_lucene_util_fst_Util$TopNSearcher_H
#define org_apache_lucene_util_fst_Util$TopNSearcher_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace fst {
          class Util$TopResults;
          class Util$FSTPath;
          class FST$Arc;
          class FST;
        }
        class IntsRefBuilder;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class CharSequence;
  }
  namespace io {
    class IOException;
  }
  namespace util {
    class Comparator;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace fst {

          class Util$TopNSearcher : public ::java::lang::Object {
           public:
            enum {
              mid_init$_00bc7350f449b1db,
              mid_init$_60f70a21d6c94113,
              mid_addStartPaths_6747eb924c445417,
              mid_addStartPaths_736f1a71b7872e65,
              mid_search_925d3a774e1de08f,
              mid_acceptPartialPath_ba8849d67b79a9e2,
              mid_addIfCompetitive_f13383d2f80d5b62,
              mid_acceptResult_ba8849d67b79a9e2,
              mid_acceptResult_0e6dbcacfd87fd12,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Util$TopNSearcher(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Util$TopNSearcher(const Util$TopNSearcher& obj) : ::java::lang::Object(obj) {}

            Util$TopNSearcher(const ::org::apache::lucene::util::fst::FST &, jint, jint, const ::java::util::Comparator &);
            Util$TopNSearcher(const ::org::apache::lucene::util::fst::FST &, jint, jint, const ::java::util::Comparator &, const ::java::util::Comparator &);

            void addStartPaths(const ::org::apache::lucene::util::fst::FST$Arc &, const ::java::lang::Object &, jboolean, const ::org::apache::lucene::util::IntsRefBuilder &) const;
            void addStartPaths(const ::org::apache::lucene::util::fst::FST$Arc &, const ::java::lang::Object &, jboolean, const ::org::apache::lucene::util::IntsRefBuilder &, jfloat, const ::java::lang::CharSequence &, jint) const;
            ::org::apache::lucene::util::fst::Util$TopResults search() const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace fst {
          extern PyType_Def PY_TYPE_DEF(Util$TopNSearcher);
          extern PyTypeObject *PY_TYPE(Util$TopNSearcher);

          class t_Util$TopNSearcher {
          public:
            PyObject_HEAD
            Util$TopNSearcher object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_Util$TopNSearcher *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const Util$TopNSearcher&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const Util$TopNSearcher&, PyTypeObject *);
            static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
