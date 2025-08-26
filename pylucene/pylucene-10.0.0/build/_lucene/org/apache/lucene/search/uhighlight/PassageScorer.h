#ifndef org_apache_lucene_search_uhighlight_PassageScorer_H
#define org_apache_lucene_search_uhighlight_PassageScorer_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace uhighlight {
          class Passage;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace uhighlight {

          class PassageScorer : public ::java::lang::Object {
           public:
            enum {
              mid_init$_e7bdbe105ce1bafb,
              mid_init$_cb8c0cc53840532d,
              mid_norm_5873a23b935a9d49,
              mid_score_6d119490fca09275,
              mid_tf_0d48bf2a3a0fe642,
              mid_weight_0d48bf2a3a0fe642,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PassageScorer(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PassageScorer(const PassageScorer& obj) : ::java::lang::Object(obj) {}

            PassageScorer();
            PassageScorer(jfloat, jfloat, jfloat);

            jfloat norm(jint) const;
            jfloat score(const ::org::apache::lucene::search::uhighlight::Passage &, jint) const;
            jfloat tf(jint, jint) const;
            jfloat weight(jint, jint) const;
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
      namespace search {
        namespace uhighlight {
          extern PyType_Def PY_TYPE_DEF(PassageScorer);
          extern PyTypeObject *PY_TYPE(PassageScorer);

          class t_PassageScorer {
          public:
            PyObject_HEAD
            PassageScorer object;
            static PyObject *wrap_Object(const PassageScorer&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
