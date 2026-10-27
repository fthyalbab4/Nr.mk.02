// rea decompile_all
// name: FUN_00629740
// address: 0x629740
// body: available
// range: 0x629740-0x62982a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x62978e (push 0x62982b followed by fs-segment stack chaining); handler 0x62982b lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00629740(undefined4 param_1,undefined4 param_2,int param_3,undefined4 *param_4)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  undefined4 *puVar4;
  uint *in_FS_OFFSET;
  uint uStack_68;
  uint uStack_64;
  undefined1 *puStack_60;
  undefined1 *puStack_5c;
  undefined4 local_4c;
  undefined1 local_48;
  int local_44;
  undefined1 local_3c [24];
  undefined4 local_24 [7];
  undefined4 local_8;

  puVar4 = local_24;
  for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = *param_4;
    param_4 = param_4 + 1;
    puVar4 = puVar4 + 1;
  }
  puStack_5c = (undefined1 *)0x629767;
  local_8 = param_1;
  FUN_0040b2dc(param_1);
  puStack_5c = (undefined1 *)0x629775;
  FUN_0040923c(local_24,&DAT_00615f70);
  puStack_5c = (undefined1 *)0x629783;
  FUN_00408ff8(&local_4c,&DAT_00628dc0);
  puStack_60 = &LAB_0062982b;
  uStack_64 = *in_FS_OFFSET;
  *in_FS_OFFSET = (uint)&uStack_64;
  puStack_5c = &stack0xfffffffc;
  if ((-1 < param_3) && (puStack_5c = &stack0xfffffffc, param_3 < 0xf4241)) {
    puStack_5c = &stack0xfffffffc;
    FUN_00629634(param_3 + 1);
    local_4c = 0;
    local_48 = 0;
    local_44 = param_3;
    FUN_00409360(local_3c,local_24,&DAT_00615f70);
    uStack_68 = (uint)DAT_006887d8;
    cVar2 = FUN_006293bc(local_8,param_2,&local_4c);
    if (cVar2 != '\0') {
      FUN_00409360(DAT_006887d4 + param_3 * 0x18,local_24,&DAT_00615f70);
    }
  }
  puVar1 = puStack_60;
  *in_FS_OFFSET = uStack_68;
  puStack_60 = &LAB_00629832;
  uStack_64 = 0x629814;
  FUN_004090d0(&local_4c,&DAT_00628dc0,puVar1);
  uStack_64 = 0x629822;
  FUN_004090d0(local_24,&DAT_00615f70);
  uStack_64 = 0x62982a;
  FUN_0040b268(&local_8);
  return;
}
