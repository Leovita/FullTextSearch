#ifndef org_apache_lucene_analysis_path_ReversePathHierarchyTokenizer_H
#define org_apache_lucene_analysis_path_ReversePathHierarchyTokenizer_H

#include "org/apache/lucene/analysis/Tokenizer.h"

namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class AttributeFactory;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace path {

          class ReversePathHierarchyTokenizer : public ::org::apache::lucene::analysis::Tokenizer {
           public:
            enum {
              mid_init$_3720c61b0679eb3e,
              mid_init$_540b2b23d51b1efd,
              mid_init$_ef0996ca4d169c86,
              mid_init$_931c9794de74ba08,
              mid_init$_4888b010066312ee,
              mid_init$_706031ca83c57787,
              mid_init$_0f764434d04e0381,
              mid_init$_137b28f7616b1227,
              mid_init$_1bd4ae7d5ef5cd09,
              mid_init$_571c3a1fb9d68345,
              mid_end_3720c61b0679eb3e,
              mid_incrementToken_947277eca0748c4e,
              mid_reset_3720c61b0679eb3e,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit ReversePathHierarchyTokenizer(jobject obj) : ::org::apache::lucene::analysis::Tokenizer(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            ReversePathHierarchyTokenizer(const ReversePathHierarchyTokenizer& obj) : ::org::apache::lucene::analysis::Tokenizer(obj) {}

            static jchar DEFAULT_DELIMITER;
            static jint DEFAULT_SKIP;

            ReversePathHierarchyTokenizer();
            ReversePathHierarchyTokenizer(jint);
            ReversePathHierarchyTokenizer(jchar, jchar);
            ReversePathHierarchyTokenizer(jint, jchar);
            ReversePathHierarchyTokenizer(jchar, jint);
            ReversePathHierarchyTokenizer(jint, jchar, jchar);
            ReversePathHierarchyTokenizer(jchar, jchar, jint);
            ReversePathHierarchyTokenizer(const ::org::apache::lucene::util::AttributeFactory &, jchar, jchar, jint);
            ReversePathHierarchyTokenizer(jint, jchar, jchar, jint);
            ReversePathHierarchyTokenizer(const ::org::apache::lucene::util::AttributeFactory &, jint, jchar, jchar, jint);

            void end() const;
            jboolean incrementToken() const;
            void reset() const;
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
      namespace analysis {
        namespace path {
          extern PyType_Def PY_TYPE_DEF(ReversePathHierarchyTokenizer);
          extern PyTypeObject *PY_TYPE(ReversePathHierarchyTokenizer);

          class t_ReversePathHierarchyTokenizer {
          public:
            PyObject_HEAD
            ReversePathHierarchyTokenizer object;
            static PyObject *wrap_Object(const ReversePathHierarchyTokenizer&);
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
