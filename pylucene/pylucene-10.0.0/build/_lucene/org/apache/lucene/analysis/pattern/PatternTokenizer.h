#ifndef org_apache_lucene_analysis_pattern_PatternTokenizer_H
#define org_apache_lucene_analysis_pattern_PatternTokenizer_H

#include "org/apache/lucene/analysis/Tokenizer.h"

namespace java {
  namespace io {
    class IOException;
  }
  namespace util {
    namespace regex {
      class Pattern;
    }
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
        namespace pattern {

          class PatternTokenizer : public ::org::apache::lucene::analysis::Tokenizer {
           public:
            enum {
              mid_init$_5bd9aa818d86b291,
              mid_init$_828e1ec31c498b34,
              mid_close_e7bdbe105ce1bafb,
              mid_end_e7bdbe105ce1bafb,
              mid_incrementToken_9aa4f33e82ea333f,
              mid_reset_e7bdbe105ce1bafb,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PatternTokenizer(jobject obj) : ::org::apache::lucene::analysis::Tokenizer(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PatternTokenizer(const PatternTokenizer& obj) : ::org::apache::lucene::analysis::Tokenizer(obj) {}

            PatternTokenizer(const ::java::util::regex::Pattern &, jint);
            PatternTokenizer(const ::org::apache::lucene::util::AttributeFactory &, const ::java::util::regex::Pattern &, jint);

            void close() const;
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
        namespace pattern {
          extern PyType_Def PY_TYPE_DEF(PatternTokenizer);
          extern PyTypeObject *PY_TYPE(PatternTokenizer);

          class t_PatternTokenizer {
          public:
            PyObject_HEAD
            PatternTokenizer object;
            static PyObject *wrap_Object(const PatternTokenizer&);
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
