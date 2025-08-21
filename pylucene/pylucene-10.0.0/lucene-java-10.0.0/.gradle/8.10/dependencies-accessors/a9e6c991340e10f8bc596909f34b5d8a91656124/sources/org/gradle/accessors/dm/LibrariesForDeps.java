package org.gradle.accessors.dm;

import org.gradle.api.NonNullApi;
import org.gradle.api.artifacts.MinimalExternalModuleDependency;
import org.gradle.plugin.use.PluginDependency;
import org.gradle.api.artifacts.ExternalModuleDependencyBundle;
import org.gradle.api.artifacts.MutableVersionConstraint;
import org.gradle.api.provider.Provider;
import org.gradle.api.model.ObjectFactory;
import org.gradle.api.provider.ProviderFactory;
import org.gradle.api.internal.catalog.AbstractExternalDependencyFactory;
import org.gradle.api.internal.catalog.DefaultVersionCatalog;
import java.util.Map;
import org.gradle.api.internal.attributes.ImmutableAttributesFactory;
import org.gradle.api.internal.artifacts.dsl.CapabilityNotationParser;
import javax.inject.Inject;

/**
 * A catalog of dependencies accessible via the {@code deps} extension.
 */
@NonNullApi
public class LibrariesForDeps extends AbstractExternalDependencyFactory {

    private final AbstractExternalDependencyFactory owner = this;
    private final AntlrLibraryAccessors laccForAntlrLibraryAccessors = new AntlrLibraryAccessors(owner);
    private final AsmLibraryAccessors laccForAsmLibraryAccessors = new AsmLibraryAccessors(owner);
    private final CommonsLibraryAccessors laccForCommonsLibraryAccessors = new CommonsLibraryAccessors(owner);
    private final FlexmarkLibraryAccessors laccForFlexmarkLibraryAccessors = new FlexmarkLibraryAccessors(owner);
    private final JmhLibraryAccessors laccForJmhLibraryAccessors = new JmhLibraryAccessors(owner);
    private final MorfologikLibraryAccessors laccForMorfologikLibraryAccessors = new MorfologikLibraryAccessors(owner);
    private final OpennlpLibraryAccessors laccForOpennlpLibraryAccessors = new OpennlpLibraryAccessors(owner);
    private final RandomizedtestingLibraryAccessors laccForRandomizedtestingLibraryAccessors = new RandomizedtestingLibraryAccessors(owner);
    private final S2LibraryAccessors laccForS2LibraryAccessors = new S2LibraryAccessors(owner);
    private final VersionAccessors vaccForVersionAccessors = new VersionAccessors(providers, config);
    private final BundleAccessors baccForBundleAccessors = new BundleAccessors(objects, providers, config, attributesFactory, capabilityNotationParser);
    private final PluginAccessors paccForPluginAccessors = new PluginAccessors(providers, config);

    @Inject
    public LibrariesForDeps(DefaultVersionCatalog config, ProviderFactory providers, ObjectFactory objects, ImmutableAttributesFactory attributesFactory, CapabilityNotationParser capabilityNotationParser) {
        super(config, providers, objects, attributesFactory, capabilityNotationParser);
    }

    /**
     * Dependency provider for <b>assertj</b> with <b>org.assertj:assertj-core</b> coordinates and
     * with version reference <b>assertj</b>
     * <p>
     * This dependency was declared in catalog versions.toml
     */
    public Provider<MinimalExternalModuleDependency> getAssertj() {
        return create("assertj");
    }

    /**
     * Dependency provider for <b>ecj</b> with <b>org.eclipse.jdt:ecj</b> coordinates and
     * with version reference <b>ecj</b>
     * <p>
     * This dependency was declared in catalog versions.toml
     */
    public Provider<MinimalExternalModuleDependency> getEcj() {
        return create("ecj");
    }

    /**
     * Dependency provider for <b>errorprone</b> with <b>com.google.errorprone:error_prone_core</b> coordinates and
     * with version reference <b>errorprone</b>
     * <p>
     * This dependency was declared in catalog versions.toml
     */
    public Provider<MinimalExternalModuleDependency> getErrorprone() {
        return create("errorprone");
    }

    /**
     * Dependency provider for <b>groovy</b> with <b>org.apache.groovy:groovy-all</b> coordinates and
     * with version reference <b>groovy</b>
     * <p>
     * This dependency was declared in catalog versions.toml
     */
    public Provider<MinimalExternalModuleDependency> getGroovy() {
        return create("groovy");
    }

    /**
     * Dependency provider for <b>hamcrest</b> with <b>org.hamcrest:hamcrest</b> coordinates and
     * with version reference <b>hamcrest</b>
     * <p>
     * This dependency was declared in catalog versions.toml
     */
    public Provider<MinimalExternalModuleDependency> getHamcrest() {
        return create("hamcrest");
    }

    /**
     * Dependency provider for <b>icu4j</b> with <b>com.ibm.icu:icu4j</b> coordinates and
     * with version reference <b>icu4j</b>
     * <p>
     * This dependency was declared in catalog versions.toml
     */
    public Provider<MinimalExternalModuleDependency> getIcu4j() {
        return create("icu4j");
    }

    /**
     * Dependency provider for <b>javacc</b> with <b>net.java.dev.javacc:javacc</b> coordinates and
     * with version reference <b>javacc</b>
     * <p>
     * This dependency was declared in catalog versions.toml
     */
    public Provider<MinimalExternalModuleDependency> getJavacc() {
        return create("javacc");
    }

    /**
     * Dependency provider for <b>jflex</b> with <b>de.jflex:jflex</b> coordinates and
     * with version reference <b>jflex</b>
     * <p>
     * This dependency was declared in catalog versions.toml
     */
    public Provider<MinimalExternalModuleDependency> getJflex() {
        return create("jflex");
    }

    /**
     * Dependency provider for <b>jgit</b> with <b>org.eclipse.jgit:org.eclipse.jgit</b> coordinates and
     * with version reference <b>jgit</b>
     * <p>
     * This dependency was declared in catalog versions.toml
     */
    public Provider<MinimalExternalModuleDependency> getJgit() {
        return create("jgit");
    }

    /**
     * Dependency provider for <b>jts</b> with <b>org.locationtech.jts:jts-core</b> coordinates and
     * with version reference <b>jts</b>
     * <p>
     * This dependency was declared in catalog versions.toml
     */
    public Provider<MinimalExternalModuleDependency> getJts() {
        return create("jts");
    }

    /**
     * Dependency provider for <b>junit</b> with <b>junit:junit</b> coordinates and
     * with version reference <b>junit</b>
     * <p>
     * This dependency was declared in catalog versions.toml
     */
    public Provider<MinimalExternalModuleDependency> getJunit() {
        return create("junit");
    }

    /**
     * Dependency provider for <b>nekohtml</b> with <b>net.sourceforge.nekohtml:nekohtml</b> coordinates and
     * with version reference <b>nekohtml</b>
     * <p>
     * This dependency was declared in catalog versions.toml
     */
    public Provider<MinimalExternalModuleDependency> getNekohtml() {
        return create("nekohtml");
    }

    /**
     * Dependency provider for <b>procfork</b> with <b>com.carrotsearch:procfork</b> coordinates and
     * with version reference <b>procfork</b>
     * <p>
     * This dependency was declared in catalog versions.toml
     */
    public Provider<MinimalExternalModuleDependency> getProcfork() {
        return create("procfork");
    }

    /**
     * Dependency provider for <b>rat</b> with <b>org.apache.rat:apache-rat</b> coordinates and
     * with version reference <b>rat</b>
     * <p>
     * This dependency was declared in catalog versions.toml
     */
    public Provider<MinimalExternalModuleDependency> getRat() {
        return create("rat");
    }

    /**
     * Dependency provider for <b>spatial4j</b> with <b>org.locationtech.spatial4j:spatial4j</b> coordinates and
     * with version reference <b>spatial4j</b>
     * <p>
     * This dependency was declared in catalog versions.toml
     */
    public Provider<MinimalExternalModuleDependency> getSpatial4j() {
        return create("spatial4j");
    }

    /**
     * Dependency provider for <b>xerces</b> with <b>xerces:xercesImpl</b> coordinates and
     * with version reference <b>xerces</b>
     * <p>
     * This dependency was declared in catalog versions.toml
     */
    public Provider<MinimalExternalModuleDependency> getXerces() {
        return create("xerces");
    }

    /**
     * Dependency provider for <b>zstd</b> with <b>com.github.luben:zstd-jni</b> coordinates and
     * with version reference <b>zstd</b>
     * <p>
     * This dependency was declared in catalog versions.toml
     */
    public Provider<MinimalExternalModuleDependency> getZstd() {
        return create("zstd");
    }

    /**
     * Group of libraries at <b>antlr</b>
     */
    public AntlrLibraryAccessors getAntlr() {
        return laccForAntlrLibraryAccessors;
    }

    /**
     * Group of libraries at <b>asm</b>
     */
    public AsmLibraryAccessors getAsm() {
        return laccForAsmLibraryAccessors;
    }

    /**
     * Group of libraries at <b>commons</b>
     */
    public CommonsLibraryAccessors getCommons() {
        return laccForCommonsLibraryAccessors;
    }

    /**
     * Group of libraries at <b>flexmark</b>
     */
    public FlexmarkLibraryAccessors getFlexmark() {
        return laccForFlexmarkLibraryAccessors;
    }

    /**
     * Group of libraries at <b>jmh</b>
     */
    public JmhLibraryAccessors getJmh() {
        return laccForJmhLibraryAccessors;
    }

    /**
     * Group of libraries at <b>morfologik</b>
     */
    public MorfologikLibraryAccessors getMorfologik() {
        return laccForMorfologikLibraryAccessors;
    }

    /**
     * Group of libraries at <b>opennlp</b>
     */
    public OpennlpLibraryAccessors getOpennlp() {
        return laccForOpennlpLibraryAccessors;
    }

    /**
     * Group of libraries at <b>randomizedtesting</b>
     */
    public RandomizedtestingLibraryAccessors getRandomizedtesting() {
        return laccForRandomizedtestingLibraryAccessors;
    }

    /**
     * Group of libraries at <b>s2</b>
     */
    public S2LibraryAccessors getS2() {
        return laccForS2LibraryAccessors;
    }

    /**
     * Group of versions at <b>versions</b>
     */
    public VersionAccessors getVersions() {
        return vaccForVersionAccessors;
    }

    /**
     * Group of bundles at <b>bundles</b>
     */
    public BundleAccessors getBundles() {
        return baccForBundleAccessors;
    }

    /**
     * Group of plugins at <b>plugins</b>
     */
    public PluginAccessors getPlugins() {
        return paccForPluginAccessors;
    }

    public static class AntlrLibraryAccessors extends SubDependencyFactory {

        public AntlrLibraryAccessors(AbstractExternalDependencyFactory owner) { super(owner); }

        /**
         * Dependency provider for <b>core</b> with <b>org.antlr:antlr4</b> coordinates and
         * with version reference <b>antlr</b>
         * <p>
         * This dependency was declared in catalog versions.toml
         */
        public Provider<MinimalExternalModuleDependency> getCore() {
            return create("antlr.core");
        }

        /**
         * Dependency provider for <b>runtime</b> with <b>org.antlr:antlr4-runtime</b> coordinates and
         * with version reference <b>antlr</b>
         * <p>
         * This dependency was declared in catalog versions.toml
         */
        public Provider<MinimalExternalModuleDependency> getRuntime() {
            return create("antlr.runtime");
        }

    }

    public static class AsmLibraryAccessors extends SubDependencyFactory {

        public AsmLibraryAccessors(AbstractExternalDependencyFactory owner) { super(owner); }

        /**
         * Dependency provider for <b>commons</b> with <b>org.ow2.asm:asm-commons</b> coordinates and
         * with version reference <b>asm</b>
         * <p>
         * This dependency was declared in catalog versions.toml
         */
        public Provider<MinimalExternalModuleDependency> getCommons() {
            return create("asm.commons");
        }

        /**
         * Dependency provider for <b>core</b> with <b>org.ow2.asm:asm</b> coordinates and
         * with version reference <b>asm</b>
         * <p>
         * This dependency was declared in catalog versions.toml
         */
        public Provider<MinimalExternalModuleDependency> getCore() {
            return create("asm.core");
        }

    }

    public static class CommonsLibraryAccessors extends SubDependencyFactory {

        public CommonsLibraryAccessors(AbstractExternalDependencyFactory owner) { super(owner); }

        /**
         * Dependency provider for <b>codec</b> with <b>commons-codec:commons-codec</b> coordinates and
         * with version reference <b>commons.codec</b>
         * <p>
         * This dependency was declared in catalog versions.toml
         */
        public Provider<MinimalExternalModuleDependency> getCodec() {
            return create("commons.codec");
        }

        /**
         * Dependency provider for <b>compress</b> with <b>org.apache.commons:commons-compress</b> coordinates and
         * with version reference <b>commons.compress</b>
         * <p>
         * This dependency was declared in catalog versions.toml
         */
        public Provider<MinimalExternalModuleDependency> getCompress() {
            return create("commons.compress");
        }

    }

    public static class FlexmarkLibraryAccessors extends SubDependencyFactory {
        private final FlexmarkExtLibraryAccessors laccForFlexmarkExtLibraryAccessors = new FlexmarkExtLibraryAccessors(owner);

        public FlexmarkLibraryAccessors(AbstractExternalDependencyFactory owner) { super(owner); }

        /**
         * Dependency provider for <b>core</b> with <b>com.vladsch.flexmark:flexmark</b> coordinates and
         * with version reference <b>flexmark</b>
         * <p>
         * This dependency was declared in catalog versions.toml
         */
        public Provider<MinimalExternalModuleDependency> getCore() {
            return create("flexmark.core");
        }

        /**
         * Group of libraries at <b>flexmark.ext</b>
         */
        public FlexmarkExtLibraryAccessors getExt() {
            return laccForFlexmarkExtLibraryAccessors;
        }

    }

    public static class FlexmarkExtLibraryAccessors extends SubDependencyFactory {

        public FlexmarkExtLibraryAccessors(AbstractExternalDependencyFactory owner) { super(owner); }

        /**
         * Dependency provider for <b>abbreviation</b> with <b>com.vladsch.flexmark:flexmark-ext-abbreviation</b> coordinates and
         * with version reference <b>flexmark</b>
         * <p>
         * This dependency was declared in catalog versions.toml
         */
        public Provider<MinimalExternalModuleDependency> getAbbreviation() {
            return create("flexmark.ext.abbreviation");
        }

        /**
         * Dependency provider for <b>attributes</b> with <b>com.vladsch.flexmark:flexmark-ext-attributes</b> coordinates and
         * with version reference <b>flexmark</b>
         * <p>
         * This dependency was declared in catalog versions.toml
         */
        public Provider<MinimalExternalModuleDependency> getAttributes() {
            return create("flexmark.ext.attributes");
        }

        /**
         * Dependency provider for <b>autolink</b> with <b>com.vladsch.flexmark:flexmark-ext-autolink</b> coordinates and
         * with version reference <b>flexmark</b>
         * <p>
         * This dependency was declared in catalog versions.toml
         */
        public Provider<MinimalExternalModuleDependency> getAutolink() {
            return create("flexmark.ext.autolink");
        }

        /**
         * Dependency provider for <b>tables</b> with <b>com.vladsch.flexmark:flexmark-ext-tables</b> coordinates and
         * with version reference <b>flexmark</b>
         * <p>
         * This dependency was declared in catalog versions.toml
         */
        public Provider<MinimalExternalModuleDependency> getTables() {
            return create("flexmark.ext.tables");
        }

    }

    public static class JmhLibraryAccessors extends SubDependencyFactory {

        public JmhLibraryAccessors(AbstractExternalDependencyFactory owner) { super(owner); }

        /**
         * Dependency provider for <b>annprocess</b> with <b>org.openjdk.jmh:jmh-generator-annprocess</b> coordinates and
         * with version reference <b>jmh</b>
         * <p>
         * This dependency was declared in catalog versions.toml
         */
        public Provider<MinimalExternalModuleDependency> getAnnprocess() {
            return create("jmh.annprocess");
        }

        /**
         * Dependency provider for <b>core</b> with <b>org.openjdk.jmh:jmh-core</b> coordinates and
         * with version reference <b>jmh</b>
         * <p>
         * This dependency was declared in catalog versions.toml
         */
        public Provider<MinimalExternalModuleDependency> getCore() {
            return create("jmh.core");
        }

    }

    public static class MorfologikLibraryAccessors extends SubDependencyFactory {

        public MorfologikLibraryAccessors(AbstractExternalDependencyFactory owner) { super(owner); }

        /**
         * Dependency provider for <b>polish</b> with <b>org.carrot2:morfologik-polish</b> coordinates and
         * with version reference <b>morfologik</b>
         * <p>
         * This dependency was declared in catalog versions.toml
         */
        public Provider<MinimalExternalModuleDependency> getPolish() {
            return create("morfologik.polish");
        }

        /**
         * Dependency provider for <b>stemming</b> with <b>org.carrot2:morfologik-stemming</b> coordinates and
         * with version reference <b>morfologik</b>
         * <p>
         * This dependency was declared in catalog versions.toml
         */
        public Provider<MinimalExternalModuleDependency> getStemming() {
            return create("morfologik.stemming");
        }

        /**
         * Dependency provider for <b>ukrainian</b> with <b>ua.net.nlp:morfologik-ukrainian-search</b> coordinates and
         * with version reference <b>morfologik.ukrainian</b>
         * <p>
         * This dependency was declared in catalog versions.toml
         */
        public Provider<MinimalExternalModuleDependency> getUkrainian() {
            return create("morfologik.ukrainian");
        }

    }

    public static class OpennlpLibraryAccessors extends SubDependencyFactory {

        public OpennlpLibraryAccessors(AbstractExternalDependencyFactory owner) { super(owner); }

        /**
         * Dependency provider for <b>tools</b> with <b>org.apache.opennlp:opennlp-tools</b> coordinates and
         * with version reference <b>opennlp</b>
         * <p>
         * This dependency was declared in catalog versions.toml
         */
        public Provider<MinimalExternalModuleDependency> getTools() {
            return create("opennlp.tools");
        }

    }

    public static class RandomizedtestingLibraryAccessors extends SubDependencyFactory {

        public RandomizedtestingLibraryAccessors(AbstractExternalDependencyFactory owner) { super(owner); }

        /**
         * Dependency provider for <b>runner</b> with <b>com.carrotsearch.randomizedtesting:randomizedtesting-runner</b> coordinates and
         * with version reference <b>randomizedtesting</b>
         * <p>
         * This dependency was declared in catalog versions.toml
         */
        public Provider<MinimalExternalModuleDependency> getRunner() {
            return create("randomizedtesting.runner");
        }

    }

    public static class S2LibraryAccessors extends SubDependencyFactory {

        public S2LibraryAccessors(AbstractExternalDependencyFactory owner) { super(owner); }

        /**
         * Dependency provider for <b>geometry</b> with <b>io.sgr:s2-geometry-library-java</b> coordinates and
         * with version reference <b>s2.geometry</b>
         * <p>
         * This dependency was declared in catalog versions.toml
         */
        public Provider<MinimalExternalModuleDependency> getGeometry() {
            return create("s2.geometry");
        }

    }

    public static class VersionAccessors extends VersionFactory  {

        private final CommonsVersionAccessors vaccForCommonsVersionAccessors = new CommonsVersionAccessors(providers, config);
        private final MorfologikVersionAccessors vaccForMorfologikVersionAccessors = new MorfologikVersionAccessors(providers, config);
        private final S2VersionAccessors vaccForS2VersionAccessors = new S2VersionAccessors(providers, config);
        public VersionAccessors(ProviderFactory providers, DefaultVersionCatalog config) { super(providers, config); }

        /**
         * Version alias <b>antlr</b> with value <b>4.11.1</b>
         * <p>
         * If the version is a rich version and cannot be represented as a
         * single version string, an empty string is returned.
         * <p>
         * This version was declared in catalog versions.toml
         */
        public Provider<String> getAntlr() { return getVersion("antlr"); }

        /**
         * Version alias <b>asm</b> with value <b>9.6</b>
         * <p>
         * If the version is a rich version and cannot be represented as a
         * single version string, an empty string is returned.
         * <p>
         * This version was declared in catalog versions.toml
         */
        public Provider<String> getAsm() { return getVersion("asm"); }

        /**
         * Version alias <b>assertj</b> with value <b>3.21.0</b>
         * <p>
         * If the version is a rich version and cannot be represented as a
         * single version string, an empty string is returned.
         * <p>
         * This version was declared in catalog versions.toml
         */
        public Provider<String> getAssertj() { return getVersion("assertj"); }

        /**
         * Version alias <b>ecj</b> with value <b>3.36.0</b>
         * <p>
         * If the version is a rich version and cannot be represented as a
         * single version string, an empty string is returned.
         * <p>
         * This version was declared in catalog versions.toml
         */
        public Provider<String> getEcj() { return getVersion("ecj"); }

        /**
         * Version alias <b>errorprone</b> with value <b>2.18.0</b>
         * <p>
         * If the version is a rich version and cannot be represented as a
         * single version string, an empty string is returned.
         * <p>
         * This version was declared in catalog versions.toml
         */
        public Provider<String> getErrorprone() { return getVersion("errorprone"); }

        /**
         * Version alias <b>flexmark</b> with value <b>0.61.24</b>
         * <p>
         * If the version is a rich version and cannot be represented as a
         * single version string, an empty string is returned.
         * <p>
         * This version was declared in catalog versions.toml
         */
        public Provider<String> getFlexmark() { return getVersion("flexmark"); }

        /**
         * Version alias <b>googleJavaFormat</b> with value <b>1.23.0</b>
         * <p>
         * If the version is a rich version and cannot be represented as a
         * single version string, an empty string is returned.
         * <p>
         * This version was declared in catalog versions.toml
         */
        public Provider<String> getGoogleJavaFormat() { return getVersion("googleJavaFormat"); }

        /**
         * Version alias <b>groovy</b> with value <b>4.0.22</b>
         * <p>
         * If the version is a rich version and cannot be represented as a
         * single version string, an empty string is returned.
         * <p>
         * This version was declared in catalog versions.toml
         */
        public Provider<String> getGroovy() { return getVersion("groovy"); }

        /**
         * Version alias <b>hamcrest</b> with value <b>2.2</b>
         * <p>
         * If the version is a rich version and cannot be represented as a
         * single version string, an empty string is returned.
         * <p>
         * This version was declared in catalog versions.toml
         */
        public Provider<String> getHamcrest() { return getVersion("hamcrest"); }

        /**
         * Version alias <b>icu4j</b> with value <b>74.2</b>
         * <p>
         * If the version is a rich version and cannot be represented as a
         * single version string, an empty string is returned.
         * <p>
         * This version was declared in catalog versions.toml
         */
        public Provider<String> getIcu4j() { return getVersion("icu4j"); }

        /**
         * Version alias <b>javacc</b> with value <b>7.0.12</b>
         * <p>
         * If the version is a rich version and cannot be represented as a
         * single version string, an empty string is returned.
         * <p>
         * This version was declared in catalog versions.toml
         */
        public Provider<String> getJavacc() { return getVersion("javacc"); }

        /**
         * Version alias <b>jflex</b> with value <b>1.8.2</b>
         * <p>
         * If the version is a rich version and cannot be represented as a
         * single version string, an empty string is returned.
         * <p>
         * This version was declared in catalog versions.toml
         */
        public Provider<String> getJflex() { return getVersion("jflex"); }

        /**
         * Version alias <b>jgit</b> with value <b>6.10.0.202406032230-r</b>
         * <p>
         * If the version is a rich version and cannot be represented as a
         * single version string, an empty string is returned.
         * <p>
         * This version was declared in catalog versions.toml
         */
        public Provider<String> getJgit() { return getVersion("jgit"); }

        /**
         * Version alias <b>jmh</b> with value <b>1.37</b>
         * <p>
         * If the version is a rich version and cannot be represented as a
         * single version string, an empty string is returned.
         * <p>
         * This version was declared in catalog versions.toml
         */
        public Provider<String> getJmh() { return getVersion("jmh"); }

        /**
         * Version alias <b>jts</b> with value <b>1.17.0</b>
         * <p>
         * If the version is a rich version and cannot be represented as a
         * single version string, an empty string is returned.
         * <p>
         * This version was declared in catalog versions.toml
         */
        public Provider<String> getJts() { return getVersion("jts"); }

        /**
         * Version alias <b>junit</b> with value <b>4.13.1</b>
         * <p>
         * If the version is a rich version and cannot be represented as a
         * single version string, an empty string is returned.
         * <p>
         * This version was declared in catalog versions.toml
         */
        public Provider<String> getJunit() { return getVersion("junit"); }

        /**
         * Version alias <b>minGradle</b> with value <b>8.10</b>
         * <p>
         * If the version is a rich version and cannot be represented as a
         * single version string, an empty string is returned.
         * <p>
         * This version was declared in catalog versions.toml
         */
        public Provider<String> getMinGradle() { return getVersion("minGradle"); }

        /**
         * Version alias <b>minJava</b> with value <b>21</b>
         * <p>
         * If the version is a rich version and cannot be represented as a
         * single version string, an empty string is returned.
         * <p>
         * This version was declared in catalog versions.toml
         */
        public Provider<String> getMinJava() { return getVersion("minJava"); }

        /**
         * Version alias <b>nekohtml</b> with value <b>1.9.17</b>
         * <p>
         * If the version is a rich version and cannot be represented as a
         * single version string, an empty string is returned.
         * <p>
         * This version was declared in catalog versions.toml
         */
        public Provider<String> getNekohtml() { return getVersion("nekohtml"); }

        /**
         * Version alias <b>opennlp</b> with value <b>2.3.2</b>
         * <p>
         * If the version is a rich version and cannot be represented as a
         * single version string, an empty string is returned.
         * <p>
         * This version was declared in catalog versions.toml
         */
        public Provider<String> getOpennlp() { return getVersion("opennlp"); }

        /**
         * Version alias <b>procfork</b> with value <b>1.0.6</b>
         * <p>
         * If the version is a rich version and cannot be represented as a
         * single version string, an empty string is returned.
         * <p>
         * This version was declared in catalog versions.toml
         */
        public Provider<String> getProcfork() { return getVersion("procfork"); }

        /**
         * Version alias <b>randomizedtesting</b> with value <b>2.8.1</b>
         * <p>
         * If the version is a rich version and cannot be represented as a
         * single version string, an empty string is returned.
         * <p>
         * This version was declared in catalog versions.toml
         */
        public Provider<String> getRandomizedtesting() { return getVersion("randomizedtesting"); }

        /**
         * Version alias <b>rat</b> with value <b>0.14</b>
         * <p>
         * If the version is a rich version and cannot be represented as a
         * single version string, an empty string is returned.
         * <p>
         * This version was declared in catalog versions.toml
         */
        public Provider<String> getRat() { return getVersion("rat"); }

        /**
         * Version alias <b>spatial4j</b> with value <b>0.8</b>
         * <p>
         * If the version is a rich version and cannot be represented as a
         * single version string, an empty string is returned.
         * <p>
         * This version was declared in catalog versions.toml
         */
        public Provider<String> getSpatial4j() { return getVersion("spatial4j"); }

        /**
         * Version alias <b>xerces</b> with value <b>2.12.0</b>
         * <p>
         * If the version is a rich version and cannot be represented as a
         * single version string, an empty string is returned.
         * <p>
         * This version was declared in catalog versions.toml
         */
        public Provider<String> getXerces() { return getVersion("xerces"); }

        /**
         * Version alias <b>zstd</b> with value <b>1.5.5-11</b>
         * <p>
         * If the version is a rich version and cannot be represented as a
         * single version string, an empty string is returned.
         * <p>
         * This version was declared in catalog versions.toml
         */
        public Provider<String> getZstd() { return getVersion("zstd"); }

        /**
         * Group of versions at <b>versions.commons</b>
         */
        public CommonsVersionAccessors getCommons() {
            return vaccForCommonsVersionAccessors;
        }

        /**
         * Group of versions at <b>versions.morfologik</b>
         */
        public MorfologikVersionAccessors getMorfologik() {
            return vaccForMorfologikVersionAccessors;
        }

        /**
         * Group of versions at <b>versions.s2</b>
         */
        public S2VersionAccessors getS2() {
            return vaccForS2VersionAccessors;
        }

    }

    public static class CommonsVersionAccessors extends VersionFactory  {

        public CommonsVersionAccessors(ProviderFactory providers, DefaultVersionCatalog config) { super(providers, config); }

        /**
         * Version alias <b>commons.codec</b> with value <b>1.13</b>
         * <p>
         * If the version is a rich version and cannot be represented as a
         * single version string, an empty string is returned.
         * <p>
         * This version was declared in catalog versions.toml
         */
        public Provider<String> getCodec() { return getVersion("commons.codec"); }

        /**
         * Version alias <b>commons.compress</b> with value <b>1.19</b>
         * <p>
         * If the version is a rich version and cannot be represented as a
         * single version string, an empty string is returned.
         * <p>
         * This version was declared in catalog versions.toml
         */
        public Provider<String> getCompress() { return getVersion("commons.compress"); }

    }

    public static class MorfologikVersionAccessors extends VersionFactory  implements VersionNotationSupplier {

        public MorfologikVersionAccessors(ProviderFactory providers, DefaultVersionCatalog config) { super(providers, config); }

        /**
         * Version alias <b>morfologik</b> with value <b>2.1.9</b>
         * <p>
         * If the version is a rich version and cannot be represented as a
         * single version string, an empty string is returned.
         * <p>
         * This version was declared in catalog versions.toml
         */
        public Provider<String> asProvider() { return getVersion("morfologik"); }

        /**
         * Version alias <b>morfologik.ukrainian</b> with value <b>4.9.1</b>
         * <p>
         * If the version is a rich version and cannot be represented as a
         * single version string, an empty string is returned.
         * <p>
         * This version was declared in catalog versions.toml
         */
        public Provider<String> getUkrainian() { return getVersion("morfologik.ukrainian"); }

    }

    public static class S2VersionAccessors extends VersionFactory  {

        public S2VersionAccessors(ProviderFactory providers, DefaultVersionCatalog config) { super(providers, config); }

        /**
         * Version alias <b>s2.geometry</b> with value <b>1.0.0</b>
         * <p>
         * If the version is a rich version and cannot be represented as a
         * single version string, an empty string is returned.
         * <p>
         * This version was declared in catalog versions.toml
         */
        public Provider<String> getGeometry() { return getVersion("s2.geometry"); }

    }

    public static class BundleAccessors extends BundleFactory {

        public BundleAccessors(ObjectFactory objects, ProviderFactory providers, DefaultVersionCatalog config, ImmutableAttributesFactory attributesFactory, CapabilityNotationParser capabilityNotationParser) { super(objects, providers, config, attributesFactory, capabilityNotationParser); }

    }

    public static class PluginAccessors extends PluginFactory {
        private final BenmanesPluginAccessors paccForBenmanesPluginAccessors = new BenmanesPluginAccessors(providers, config);
        private final OwaspPluginAccessors paccForOwaspPluginAccessors = new OwaspPluginAccessors(providers, config);
        private final UndercouchPluginAccessors paccForUndercouchPluginAccessors = new UndercouchPluginAccessors(providers, config);

        public PluginAccessors(ProviderFactory providers, DefaultVersionCatalog config) { super(providers, config); }

        /**
         * Plugin provider for <b>dependencychecks</b> with plugin id <b>com.carrotsearch.gradle.dependencychecks</b> and
         * with version <b>0.0.9</b>
         * <p>
         * This plugin was declared in catalog versions.toml
         */
        public Provider<PluginDependency> getDependencychecks() { return createPlugin("dependencychecks"); }

        /**
         * Plugin provider for <b>errorprone</b> with plugin id <b>net.ltgt.errorprone</b> and
         * with version <b>3.1.0</b>
         * <p>
         * This plugin was declared in catalog versions.toml
         */
        public Provider<PluginDependency> getErrorprone() { return createPlugin("errorprone"); }

        /**
         * Plugin provider for <b>forbiddenapis</b> with plugin id <b>de.thetaphi.forbiddenapis</b> and
         * with version <b>3.7</b>
         * <p>
         * This plugin was declared in catalog versions.toml
         */
        public Provider<PluginDependency> getForbiddenapis() { return createPlugin("forbiddenapis"); }

        /**
         * Plugin provider for <b>jacocolog</b> with plugin id <b>org.barfuin.gradle.jacocolog</b> and
         * with version <b>3.1.0</b>
         * <p>
         * This plugin was declared in catalog versions.toml
         */
        public Provider<PluginDependency> getJacocolog() { return createPlugin("jacocolog"); }

        /**
         * Plugin provider for <b>randomizedtesting</b> with plugin id <b>com.carrotsearch.gradle.randomizedtesting</b> and
         * with version <b>0.0.6</b>
         * <p>
         * This plugin was declared in catalog versions.toml
         */
        public Provider<PluginDependency> getRandomizedtesting() { return createPlugin("randomizedtesting"); }

        /**
         * Plugin provider for <b>spotless</b> with plugin id <b>com.diffplug.spotless</b> and
         * with version <b>6.9.1</b>
         * <p>
         * This plugin was declared in catalog versions.toml
         */
        public Provider<PluginDependency> getSpotless() { return createPlugin("spotless"); }

        /**
         * Plugin provider for <b>versionCatalogUpdate</b> with plugin id <b>nl.littlerobots.version-catalog-update</b> and
         * with version <b>0.8.4</b>
         * <p>
         * This plugin was declared in catalog versions.toml
         */
        public Provider<PluginDependency> getVersionCatalogUpdate() { return createPlugin("versionCatalogUpdate"); }

        /**
         * Group of plugins at <b>plugins.benmanes</b>
         */
        public BenmanesPluginAccessors getBenmanes() {
            return paccForBenmanesPluginAccessors;
        }

        /**
         * Group of plugins at <b>plugins.owasp</b>
         */
        public OwaspPluginAccessors getOwasp() {
            return paccForOwaspPluginAccessors;
        }

        /**
         * Group of plugins at <b>plugins.undercouch</b>
         */
        public UndercouchPluginAccessors getUndercouch() {
            return paccForUndercouchPluginAccessors;
        }

    }

    public static class BenmanesPluginAccessors extends PluginFactory {

        public BenmanesPluginAccessors(ProviderFactory providers, DefaultVersionCatalog config) { super(providers, config); }

        /**
         * Plugin provider for <b>benmanes.versions</b> with plugin id <b>com.github.ben-manes.versions</b> and
         * with version <b>0.51.0</b>
         * <p>
         * This plugin was declared in catalog versions.toml
         */
        public Provider<PluginDependency> getVersions() { return createPlugin("benmanes.versions"); }

    }

    public static class OwaspPluginAccessors extends PluginFactory {

        public OwaspPluginAccessors(ProviderFactory providers, DefaultVersionCatalog config) { super(providers, config); }

        /**
         * Plugin provider for <b>owasp.dependencycheck</b> with plugin id <b>org.owasp.dependencycheck</b> and
         * with version <b>7.2.0</b>
         * <p>
         * This plugin was declared in catalog versions.toml
         */
        public Provider<PluginDependency> getDependencycheck() { return createPlugin("owasp.dependencycheck"); }

    }

    public static class UndercouchPluginAccessors extends PluginFactory {

        public UndercouchPluginAccessors(ProviderFactory providers, DefaultVersionCatalog config) { super(providers, config); }

        /**
         * Plugin provider for <b>undercouch.download</b> with plugin id <b>de.undercouch.download</b> and
         * with version <b>5.2.0</b>
         * <p>
         * This plugin was declared in catalog versions.toml
         */
        public Provider<PluginDependency> getDownload() { return createPlugin("undercouch.download"); }

    }

}
