// rea decompile_all
// name: FUN_005892ac
// address: 0x5892ac
// body: available
// range: 0x5892ac-0x589369 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5892d2 (push 0x58936a followed by fs-segment stack chaining); handler 0x58936a lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005892ac(undefined4 param_1,uint *param_2)

{
  undefined1 *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 *in_FS_OFFSET;
  undefined1 uVar4;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 local_10;
  undefined1 local_9;
  undefined4 local_8;

  local_10 = 0;
  puStack_20 = (undefined1 *)0x5892c7;
  local_8 = param_1;
  thunk_FUN_00407ad0(param_1);
  puStack_24 = &LAB_0058936a;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  local_9 = 1;
  puStack_20 = &stack0xfffffffc;
  iVar2 = FUN_00588a60(local_8);
  *param_2 = iVar2 + 100000;
  if ((int)*param_2 < 100000) {
    iVar2 = FUN_00586028(local_8);
    *param_2 = iVar2 + 500000;
    if ((int)*param_2 < 500000) {
      *param_2 = 0xffffffff;
      if (-1 < DAT_00686b20 + -1) {
        uVar3 = 0;
        iVar2 = DAT_00686b20;
        do {
          uVar4 = (uVar3 & 0x7fffffff) == 0;
          FUN_00408508(&local_10,DAT_00686b1c + uVar3 * 0x50);
          FUN_0040891c(local_10,local_8);
          if ((bool)uVar4) {
            *param_2 = uVar3;
            goto LAB_0058934c;
          }
          uVar3 = uVar3 + 1;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
      local_9 = 0;
    }
  }
LAB_0058934c:
  puVar1 = puStack_20;
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_00589371;
  puStack_24 = (undefined1 *)0x589361;
  thunk_FUN_004072d8(&local_10,uStack_28,puVar1);
  puStack_24 = (undefined1 *)0x589369;
  thunk_FUN_004072d8(&local_8);
  return;
}
