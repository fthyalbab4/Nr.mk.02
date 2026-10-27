// rea decompile_all
// name: FUN_006292d0
// address: 0x6292d0
// body: available
// range: 0x6292d0-0x6293ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x629318 (push 0x6293ac followed by fs-segment stack chaining); handler 0x6293ac lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

void FUN_006292d0(undefined4 param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  int *piVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined1 local_8129 [28617];
  undefined4 uStack_1160;
  int *piStack_115c;
  int *piStack_1158;
  undefined4 *puStack_1154;
  undefined4 uStack_1150;
  undefined1 *puStack_114c;
  int *piStack_1148;
  undefined4 uStack_1144;
  undefined1 *puStack_1140;
  undefined1 *puStack_113c;
  undefined4 local_40;
  int local_3c [3];
  char local_30;
  undefined4 local_2c;
  undefined1 local_24 [28];
  int *local_8;

  piVar2 = (int *)0x8;
  do {
    local_8 = piVar2;
    piVar2 = (int *)((int)local_8 + -1);
  } while ((int *)((int)local_8 + -1) != (int *)0x0);
  puStack_113c = (undefined1 *)0x6292fc;
  FUN_0040b2dc(local_8);
  puStack_113c = (undefined1 *)0x62930a;
  FUN_00408ff8(local_3c + 2,&DAT_00628dc0);
  puStack_1140 = &LAB_006293ac;
  uStack_1144 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1144;
  puStack_113c = &stack0xfffffffc;
  if (local_8 != (int *)0x0) {
    local_3c[1] = 32000;
    puStack_113c = &stack0xfffffffc;
    local_40 = param_2;
    while( true ) {
      piStack_1148 = local_3c + 1;
      puStack_114c = local_8129;
      uStack_1150 = 1;
      puStack_1154 = &local_40;
      piStack_115c = local_8;
      uStack_1160 = 0x629382;
      piStack_1158 = local_3c;
      iVar3 = (**(code **)(*local_8 + 100))();
      if (iVar3 != 0) break;
      if (local_3c[0] != 0) {
        piStack_1148 = (int *)0x629347;
        FUN_006291e4(local_8129,33000,local_3c + 2);
        local_3c[2] = local_3c[0];
        if (local_30 == '\0') {
          piStack_1148 = (int *)0x62935d;
          FUN_00629848(local_2c,local_24);
        }
        else {
          piStack_1148 = (int *)0x629367;
          FUN_00628e90(local_3c + 2);
        }
      }
    }
  }
  puVar1 = puStack_113c;
  *in_FS_OFFSET = uStack_1144;
  puStack_113c = &LAB_006293b3;
  puStack_1140 = (undefined1 *)0x6293a3;
  FUN_004090d0(local_3c + 2,&DAT_00628dc0,puVar1);
  puStack_1140 = (undefined1 *)0x6293ab;
  FUN_0040b268(&local_8);
  return;
}
