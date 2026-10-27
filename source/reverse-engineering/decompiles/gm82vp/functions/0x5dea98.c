// rea decompile_all
// name: FUN_005dea98
// address: 0x5dea98
// body: available
// range: 0x5dea98-0x5deb2d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5deaaf (push 0x5deb2e followed by fs-segment stack chaining); handler 0x5deb2e lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005dea98(undefined4 param_1,undefined4 *param_2)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_8;

  puStack_18 = &stack0xfffffffc;
  local_8 = 0;
  puStack_1c = &LAB_005deb2e;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  FUN_00408194(param_2,0);
  while( true ) {
    uVar3 = FUN_005de930(param_1);
    cVar2 = (char)uVar3;
    if ((cVar2 == '\n') || (cVar2 == '\r')) break;
    FUN_00408300(&local_8,uVar3);
    FUN_004085b8(param_2,local_8);
  }
  if (cVar2 == '\r') {
    cVar2 = FUN_005de914(param_1);
    if (cVar2 == '\n') {
      FUN_005de930(param_1);
    }
  }
  iVar4 = FUN_00408d44(&DAT_005deb48,*param_2);
  if (0 < iVar4) {
    FUN_00408a54(param_2,iVar4,0x7fffffff);
  }
  puVar1 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_005deb35;
  puStack_1c = (undefined1 *)0x5deb2d;
  thunk_FUN_004072d8(&local_8,uStack_20,puVar1);
  return;
}
