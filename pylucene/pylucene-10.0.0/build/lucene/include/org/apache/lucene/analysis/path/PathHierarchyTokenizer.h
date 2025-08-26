#ifndef org_apache_lucene_analysis_path_PathHierarchyTokenizer_H
#define org_apache_lucene_analysis_path_PathHierarchyTokenizer_H

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

          class PathHierarchyTokenizer : public ::org::apache::lucene::analysis::Tokenizer {
           public:
            enum {
              mid_init$_e7bdbe105ce1bafb,
              mid_init$_8226bd0b0fc13dba,
              mid_init$_5bdb18e786a105db,
              mid_init$_53f645c50443c1f0,
              mid_init$_91a246214e4f03a0,
              mid_init$_ed7345c6c0d53750,
              mid_init$_2588ccc1b6d270dc,
              mid_init$_25bd654acaa90d87,
              mid_end_e7bdbe105ce1bafb,
              mid_incrementToken_9aa4f33e82ea333f,
              mid_reset_e7bdbe105ce1bafb,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PathHierarchyTokenizer(jobject obj) : ::org::apache::lucene::analysis::Tokenizer(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PathHierarchyTokenizer(const PathHierarchyTokenizer& obj) : ::org::apache::lucene::analysis::Tokenizer(obj) {}

            static jchar DEFAULT_DELIMITER;
            static jint DEFAULT_SKIP;

            PathHierarchyTokenizer();
            PathHierarchyTokenizer(jint);
            PathHierarchyTokenizer(jchar, jchar);
            PathHierarchyTokenizer(jint, jchar);
            PathHierarchyTokenizer(jchar, jchar, jint);
            PathHierarchyTokenizer(const ::org::apache::lucene::util::AttributeFactory &, jchar, jchar, jint);
            PathHierarchyTokenizer(jint, jchar, jchar, jint);
            PathHierarchyTokenizer(const ::org::apache::lucene::util::AttributeFactory &, jint, jchar, jchar, jint);

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
          extern PyType_Def PY_TYPE_DEF(PathHierarchyTokenizer);
          extern PyTypeObject *PY_TYPE(PathHierarchyTokenizer);

          class t_PathHierarchyTokenizer {
          public:
            PyObject_HEAD
            PathHierarchyTokenizer object;
            static PyObject *wrap_Object(const PathHierarchyTokenizer&);
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
