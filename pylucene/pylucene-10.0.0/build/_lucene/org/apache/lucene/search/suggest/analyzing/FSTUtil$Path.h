#ifndef org_apache_lucene_search_suggest_analyzing_FSTUtil$Path_H
#define org_apache_lucene_search_suggest_analyzing_FSTUtil$Path_H

#include "java/lang/Record.h"

namespace java {
  namespace lang {
    class Class;
    class String;
    class Object;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace fst {
          class FST$Arc;
        }
        class IntsRefBuilder;
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
          namespace analyzing {

            class FSTUtil$Path : public ::java::lang::Record {
             public:
              enum {
                mid_init$_b1ad2ddae99a093b,
                mid_equals_570b5248a6da3ef6,
                mid_fstNode_2281313d53c6dd58,
                mid_hashCode_20fbf7565993c3d7,
                mid_input_b1b07ef2097936e2,
                mid_output_5655ed8670534604,
                mid_state_20fbf7565993c3d7,
                mid_toString_09a7afff1868fc5e,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit FSTUtil$Path(jobject obj) : ::java::lang::Record(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              FSTUtil$Path(const FSTUtil$Path& obj) : ::java::lang::Record(obj) {}

              FSTUtil$Path(jint, const ::org::apache::lucene::util::fst::FST$Arc &, const ::java::lang::Object &, const ::org::apache::lucene::util::IntsRefBuilder &);

              jboolean equals(const ::java::lang::Object &) const;
              ::org::apache::lucene::util::fst::FST$Arc fstNode() const;
              jint hashCode() const;
              ::org::apache::lucene::util::IntsRefBuilder input() const;
              ::java::lang::Object output() const;
              jint state() const;
              ::java::lang::String toString() const;
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
          namespace analyzing {
            extern PyType_Def PY_TYPE_DEF(FSTUtil$Path);
            extern PyTypeObject *PY_TYPE(FSTUtil$Path);

            class t_FSTUtil$Path {
            public:
              PyObject_HEAD
              FSTUtil$Path object;
              PyTypeObject *parameters[1];
              static PyTypeObject **parameters_(t_FSTUtil$Path *self)
              {
                return (PyTypeObject **) &(self->parameters);
              }
              static PyObject *wrap_Object(const FSTUtil$Path&);
              static PyObject *wrap_jobject(const jobject&);
              static PyObject *wrap_Object(const FSTUtil$Path&, PyTypeObject *);
              static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
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
