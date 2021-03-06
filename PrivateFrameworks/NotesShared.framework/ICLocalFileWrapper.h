/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

@interface ICLocalFileWrapper : NSFileWrapper <NSSecureCoding> {
    NSData *_cachedData;
    NSURL *_localURL;
}

@property (nonatomic, retain) NSData *cachedData;
@property (nonatomic, retain) NSURL *localURL;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)addFileWrapper:(id)arg1;
- (id)addRegularFileWithContents:(id)arg1 preferredFilename:(id)arg2;
- (id)cachedData;
- (id)dataWithError:(id*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)fileAttributes;
- (id)fileWrappers;
- (id)filename;
- (id)initWithCoder:(id)arg1;
- (id)initWithLocalURL:(id)arg1;
- (BOOL)isDirectory;
- (BOOL)isSymbolicLink;
- (id)keyForFileWrapper:(id)arg1;
- (id)localURL;
- (BOOL)matchesContentsOfURL:(id)arg1;
- (id)preferredFilename;
- (BOOL)readFromURL:(id)arg1 options:(unsigned int)arg2 error:(id*)arg3;
- (id)regularFileContents;
- (void)removeFileWrapper:(id)arg1;
- (id)serializedRepresentation;
- (void)setCachedData:(id)arg1;
- (void)setLocalURL:(id)arg1;
- (id)symbolicLinkDestinationURL;
- (BOOL)writeToURL:(id)arg1 options:(unsigned int)arg2 originalContentsURL:(id)arg3 error:(id*)arg4;

@end
