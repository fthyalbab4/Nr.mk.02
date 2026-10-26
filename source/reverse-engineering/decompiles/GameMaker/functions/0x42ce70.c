// rea decompile_all
// name: FUN_0042ce70
// address: 0x42ce70
// body: available
// range: 0x42ce70-0x42cf43 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x42ce8b (push 0x42cf44 followed by fs-segment stack chaining); handler 0x42cf44 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0042ce70(char *param_1,int param_2,undefined4 *param_3)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  byte *pbVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 local_c;
  undefined4 local_8;

  puStack_1c = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  puStack_20 = &LAB_0042cf44;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  if (*param_1 == '\x01') {
    puStack_1c = &stack0xfffffffc;
    FUN_0041666c(param_2,param_3);
  }
  else {
    iVar3 = FUN_0042ce64(param_1);
    iVar3 = FUN_0042ce64(**(undefined4 **)(iVar3 + 9));
    if ((param_1 == "\x03\aBoolean\x01") || (*(int *)(iVar3 + 1) < 0)) {
      FUN_00407eb8(param_3,(&PTR_u_False_00774030)[param_2 != 0]);
      cVar2 = FUN_00415a34(*(undefined4 *)PTR_PTR_00782760,&DAT_0042cf60);
      if (cVar2 != '\0') {
        FUN_00415758(*param_3,&local_c);
        FUN_00407eb8(param_3,local_c);
      }
    }
    else {
      pbVar4 = (byte *)(iVar3 + 0xd);
      for (; param_2 != 0; param_2 = param_2 + -1) {
        pbVar4 = pbVar4 + *pbVar4 + 1;
      }
      FUN_0040b6a0(pbVar4,&local_8);
      FUN_00407eb8(param_3,local_8);
    }
  }
  puVar1 = puStack_1c;
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_0042cf4b;
  puStack_20 = (undefined1 *)0x42cf43;
  thunk_FUN_00406e80(&local_c,2,puVar1);
  return;
}
