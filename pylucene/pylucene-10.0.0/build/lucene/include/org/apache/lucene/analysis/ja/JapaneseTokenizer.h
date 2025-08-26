#ifndef org_apache_lucene_analysis_ja_JapaneseTokenizer_H
#define org_apache_lucene_analysis_ja_JapaneseTokenizer_H

#include "org/apache/lucene/analysis/Tokenizer.h"

namespace java {
  namespace lang {
    class Class;
    class String;
  }
  namespace io {
    class IOException;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace ja {
          class JapaneseTokenizer$Mode;
          namespace dict {
            class TokenInfoDictionary;
            class ConnectionCosts;
            class UnknownDictionary;
            class UserDictionary;
            class JaMorphData;
          }
        }
        namespace morph {
          class GraphvizFormatter;
        }
      }
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
        namespace ja {

          class JapaneseTokenizer : public ::org::apache::lucene::analysis::Tokenizer {
           public:
            enum {
              mid_init$_1b4d068f29966121,
              mid_init$_d0b134750b62e36e,
              mid_init$_e659ffacbf2dac33,
              mid_init$_1753ff7661fe9595,
              mid_init$_7cd28bb2002f12f4,
              mid_calcNBestCost_fa2a6f298bd618ab,
              mid_close_e7bdbe105ce1bafb,
              mid_end_e7bdbe105ce1bafb,
              mid_incrementToken_9aa4f33e82ea333f,
              mid_reset_e7bdbe105ce1bafb,
              mid_setGraphvizFormatter_faba969b4b03547a,
              mid_setNBestCost_8226bd0b0fc13dba,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit JapaneseTokenizer(jobject obj) : ::org::apache::lucene::analysis::Tokenizer(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            JapaneseTokenizer(const JapaneseTokenizer& obj) : ::org::apache::lucene::analysis::Tokenizer(obj) {}

            static ::org::apache::lucene::analysis::ja::JapaneseTokenizer$Mode *DEFAULT_MODE;

            JapaneseTokenizer(const ::org::apache::lucene::analysis::ja::dict::UserDictionary &, jboolean, const ::org::apache::lucene::analysis::ja::JapaneseTokenizer$Mode &);
            JapaneseTokenizer(const ::org::apache::lucene::util::AttributeFactory &, const ::org::apache::lucene::analysis::ja::dict::UserDictionary &, jboolean, const ::org::apache::lucene::analysis::ja::JapaneseTokenizer$Mode &);
            JapaneseTokenizer(const ::org::apache::lucene::analysis::ja::dict::UserDictionary &, jboolean, jboolean, const ::org::apache::lucene::analysis::ja::JapaneseTokenizer$Mode &);
            JapaneseTokenizer(const ::org::apache::lucene::util::AttributeFactory &, const ::org::apache::lucene::analysis::ja::dict::UserDictionary &, jboolean, jboolean, const ::org::apache::lucene::analysis::ja::JapaneseTokenizer$Mode &);
            JapaneseTokenizer(const ::org::apache::lucene::util::AttributeFactory &, const ::org::apache::lucene::analysis::ja::dict::TokenInfoDictionary &, const ::org::apache::lucene::analysis::ja::dict::UnknownDictionary &, const ::org::apache::lucene::analysis::ja::dict::ConnectionCosts &, const ::org::apache::lucene::analysis::ja::dict::UserDictionary &, jboolean, jboolean, const ::org::apache::lucene::analysis::ja::JapaneseTokenizer$Mode &);

            jint calcNBestCost(const ::java::lang::String &) const;
            void close() const;
            void end() const;
            jboolean incrementToken() const;
            void reset() const;
            void setGraphvizFormatter(const ::org::apache::lucene::analysis::morph::GraphvizFormatter &) const;
            void setNBestCost(jint) const;
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
        namespace ja {
          extern PyType_Def PY_TYPE_DEF(JapaneseTokenizer);
          extern PyTypeObject *PY_TYPE(JapaneseTokenizer);

          class t_JapaneseTokenizer {
          public:
            PyObject_HEAD
            JapaneseTokenizer object;
            static PyObject *wrap_Object(const JapaneseTokenizer&);
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
