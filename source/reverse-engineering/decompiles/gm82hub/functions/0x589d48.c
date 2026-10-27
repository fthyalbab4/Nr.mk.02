// rea decompile_all
// name: FUN_00589d48
// address: 0x589d48
// body: available
// range: 0x589d48-0x589e3b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x589d6f (push 0x589e3c followed by fs-segment stack chaining); handler 0x589e3c lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00589d48(void)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_3c;
  undefined1 *puStack_38;
  undefined1 *puStack_34;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c [24];

  local_24 = 0;
  puStack_34 = (undefined1 *)0x589d64;
  FUN_00408ff8(local_1c,&DAT_00615f70);
  puStack_38 = &LAB_00589e3c;
  uStack_3c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_3c;
  puStack_34 = &stack0xfffffffc;
  if (-1 < DAT_00686b24 + -1) {
    iVar4 = 0;
    iVar5 = DAT_00686b24;
    puStack_34 = &stack0xfffffffc;
    do {
      if (*(int *)(DAT_0084f014 + iVar4 * 4) != 0) {
        uStack_3c = 0;
        uVar3 = FUN_00616588(&DAT_006160fc,1,*(undefined4 *)(DAT_0084f014 + iVar4 * 4));
        cVar2 = FUN_00616664(uVar3);
        if (cVar2 == '\0') {
          FUN_00408678(&local_24,L"COMPILATION ERROR in library initialization code\r",
                       *(undefined4 *)PTR_DAT_00689674);
          FUN_006113b0(local_24,1);
        }
        else {
          local_20 = FUN_0060d2cc(&DAT_0060b63c,1,0,0,0,0,0,0);
          FUN_0058866c(local_20,local_20,uVar3,local_1c);
          FUN_00405fdc(local_20);
        }
        FUN_00405fdc(uVar3);
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  puVar1 = puStack_34;
  *in_FS_OFFSET = uStack_3c;
  puStack_34 = &LAB_00589e43;
  puStack_38 = (undefined1 *)0x589e2d;
  thunk_FUN_004072d8(&local_24,uStack_3c,puVar1);
  puStack_38 = (undefined1 *)0x589e3b;
  FUN_004090d0(local_1c,&DAT_00615f70);
  return;
}
