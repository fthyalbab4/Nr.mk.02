// rea decompile_all
// name: FUN_0046f6e0
// address: 0x46f6e0
// body: available
// range: 0x46f6e0-0x46f7b5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0046f6e0(int *param_1,byte param_2,int *param_3,int param_4)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30 [6];
  undefined4 local_18;
  int local_14;
  int local_10;
  byte local_9;
  int *local_8;

  local_14 = *param_3;
  local_10 = param_3[1];
  if (param_1 != (int *)0x0) {
    local_18 = *(undefined4 *)(*(int *)(param_1[0x12] + 0x10) + 0x14);
    local_9 = param_2;
    local_8 = param_1;
    FUN_0045c2e4(param_1[0x12],*(undefined4 *)(*(int *)(param_1[0x11] + 0x10) + 0x14));
    iVar4 = 3;
    puVar2 = &DAT_0068113c;
    puVar3 = local_30;
    do {
      FUN_00436aa0(*(int *)(puVar2 + (uint)local_9 * 0x18) * param_4 + local_14,
                   *(int *)(puVar2 + (uint)local_9 * 0x18 + 4) * param_4 + local_10,&local_38);
      *puVar3 = local_38;
      puVar3[1] = local_34;
      puVar3 = puVar3 + 2;
      puVar2 = puVar2 + 8;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    uVar1 = *(undefined4 *)(*(int *)(local_8[0x11] + 0x10) + 0x18);
    FUN_0045c064(local_8[0x11],1);
    (**(code **)(*local_8 + 100))(local_8,local_30,2);
    FUN_0045c064(local_8[0x11],uVar1);
    FUN_0045c2e4(local_8[0x12],local_18);
  }
  return;
}
