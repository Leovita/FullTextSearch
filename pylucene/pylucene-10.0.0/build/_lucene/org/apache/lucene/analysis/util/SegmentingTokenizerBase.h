#ifndef org_apache_lucene_analysis_util_SegmentingTokenizerBase_H
#define org_apache_lucene_analysis_util_SegmentingTokenizerBase_H

#include "org/apache/lucene/analysis/Tokenizer.h"

namespace java {
  namespace io {
    class IOException;
  }
  namespace text {
    class BreakIterator;
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
        namespace util {

          class SegmentingTokenizerBase : public ::org::apache::lucene::analysis::Tokenizer {
           public:
            enum {
              mid_init$_e4e1cc72d4503bfa,
              mid_init$_b68301fb63cc607b,
              mid_end_e7bdbe105ce1bafb,
              mid_incrementToken_9aa4f33e82ea333f,
              mid_reset_e7bdbe105ce1bafb,
              mid_setNextSentence_645c25455f5b9b1c,
              mid_incrementWord_9aa4f33e82ea333f,
              mid_isSafeEnd_96a1e5bdb33dde4e,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SegmentingTokenizerBase(jobject obj) : ::org::apache::lucene::analysis::Tokenizer(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SegmentingTokenizerBase(const SegmentingTokenizerBase& obj) : ::org::apache::lucene::analysis::Tokenizer(obj) {}

            SegmentingTokenizerBase(const ::java::text::BreakIterator &);
            SegmentingTokenizerBase(const ::org::apache::lucene::util::AttributeFactory &, const ::java::text::BreakIterator &);

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
        namespace util {
          extern PyType_Def PY_TYPE_DEF(SegmentingTokenizerBase);
          extern PyTypeObject *PY_TYPE(SegmentingTokenizerBase);

          class t_SegmentingTokenizerBase {
          public:
            PyObject_HEAD
            SegmentingTokenizerBase object;
            static PyObject *wrap_Object(const SegmentingTokenizerBase&);
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
