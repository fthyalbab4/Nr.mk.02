// rea decompile_all
// name: FUN_005fedc8
// address: 0x5fedc8
// body: available
// range: 0x5fedc8-0x5fef22 inclusive
// range: 0x5fef2a-0x5ff082 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5fedf5 (push 0x5ff083 followed by fs-segment stack chaining); handler 0x5ff083 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5feea2 (push 0x5fef23 followed by fs-segment stack chaining); handler 0x5fef23 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005fedc8(int *param_1,char param_2,int param_3,char param_4)

{
  int *piVar1;
  undefined1 *puVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_50;
  undefined1 *puStack_4c;
  undefined1 *puStack_48;
  undefined4 uStack_44;
  undefined1 *puStack_40;
  undefined1 *puStack_3c;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  int local_18;
  int local_14;
  char local_d;
  int *local_c;
  undefined4 local_8;

  puStack_3c = &stack0xfffffffc;
  local_30 = 0;
  local_2c = 0;
  local_20 = 0;
  local_1c = 0;
  local_8 = 0;
  puStack_40 = &LAB_005ff083;
  uStack_44 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_44;
  local_14 = param_3;
  if ((param_3 == -1) && ((local_14 = param_1[0x30], local_14 == -1 || (local_14 == 0)))) {
    local_14 = -2;
  }
  puStack_48 = (undefined1 *)0x5fee2c;
  local_d = param_2;
  local_c = param_1;
  (**(code **)(*param_1 + 0x70))(param_1,param_2,0);
  puStack_48 = (undefined1 *)0x5fee34;
  cVar3 = (**(code **)(*local_c + 100))();
  if (cVar3 == '\0') {
    if (local_d != '\0') {
      puStack_48 = (undefined1 *)0x5ff039;
      FUN_0040b75c(PTR_PTR_00781c7c,&local_30);
      puStack_48 = (undefined1 *)0x5ff048;
      FUN_005df5ec(&PTR_LAB_005deea4,1,local_30);
      puStack_48 = (undefined1 *)0x5ff04d;
      FUN_00406618();
    }
  }
  else {
    local_18 = 0;
    do {
      puStack_48 = (undefined1 *)0x5fee4f;
      cVar3 = (**(code **)(*local_c + 0x88))(local_c,local_14);
      if (cVar3 == '\0') {
        if (param_4 != '\0') {
          puStack_48 = (undefined1 *)0x5feffc;
          FUN_0040b75c(PTR_PTR_00781798,&local_2c);
          puStack_48 = (undefined1 *)0x5ff009;
          FUN_005df624(&PTR_LAB_005fa49c,local_2c);
        }
        break;
      }
      if ((char)local_c[0x2d] == '\0') {
        local_18 = 0;
        if (local_d != '\0') {
          puStack_48 = (undefined1 *)0x5fef5e;
          FUN_0040b75c(PTR_PTR_00781c7c,&local_20);
          puStack_48 = (undefined1 *)0x5fef6b;
          FUN_005df624(&PTR_LAB_005fab04,local_20);
        }
      }
      else {
        puStack_48 = (undefined1 *)0x5fee6f;
        cVar3 = (**(code **)(*local_c + 100))();
        if (cVar3 != '\0') {
          puStack_48 = (undefined1 *)local_c[0x31];
          puStack_4c = (undefined1 *)0x5fee94;
          FUN_00409be0(&local_8,&DAT_004108f8,1);
          puStack_4c = &LAB_005fef23;
          uStack_50 = *in_FS_OFFSET;
          *in_FS_OFFSET = &uStack_50;
          puStack_48 = &stack0xfffffffc;
          local_18 = (**(code **)(*local_c + 0x5c))(local_c,&local_8);
          if (0 < local_18) {
            FUN_00409be0(&local_8,&DAT_004108f8,1,local_18);
            piVar1 = (int *)local_c[0x29];
            if (piVar1 != (int *)0x0) {
              (**(code **)(*piVar1 + 0x40))(piVar1,&local_8);
              local_18 = FUN_00409a18(local_8);
            }
            FUN_005f90e4(local_c[0x28],local_8,0xffffffff);
          }
          puVar2 = puStack_48;
          *in_FS_OFFSET = uStack_50;
          puStack_48 = (undefined1 *)0x5fef6b;
          puStack_4c = (undefined1 *)0x5fef22;
          FUN_00409ce0(&local_8,&DAT_004108f8,puVar2);
          return;
        }
        puStack_48 = (undefined1 *)0x5fef37;
        FUN_0040b75c(PTR_PTR_00781efc,&local_1c);
        puStack_48 = (undefined1 *)0x5fef44;
        FUN_005df624(&PTR_LAB_005fa3f0,local_1c);
      }
      if (local_18 < 0) {
        puStack_48 = (undefined1 *)0x1;
        local_28 = 0x274a;
        local_24 = 0x2745;
        puStack_4c = (undefined1 *)0x5fef93;
        uVar4 = FUN_005f4458(*(undefined4 *)PTR_DAT_007826d0,local_18,&local_28);
        *(undefined1 *)((int)local_c + 0x91) = 1;
        puStack_48 = (undefined1 *)0x5fefa7;
        (**(code **)(*local_c + 0x78))();
        puStack_48 = (undefined1 *)0x5fefaf;
        cVar3 = FUN_00600644(local_c);
        if (cVar3 != '\0') {
          puStack_48 = (undefined1 *)0x5fefc1;
          (**(code **)(**(int **)PTR_DAT_007826d0 + 0x4c))(*(int **)PTR_DAT_007826d0,uVar4);
        }
        local_18 = 0;
      }
      if (local_18 == 0) {
        *(undefined1 *)((int)local_c + 0x91) = 1;
      }
      puStack_48 = (undefined1 *)0x5fefe4;
      (**(code **)(*local_c + 0x70))(local_c,local_d,0);
      if (local_18 != 0) break;
      puStack_48 = (undefined1 *)0x5ff01c;
      cVar3 = (**(code **)(*local_c + 100))();
    } while (cVar3 != '\0');
  }
  puVar2 = puStack_3c;
  *in_FS_OFFSET = uStack_44;
  puStack_3c = &LAB_005ff08a;
  puStack_40 = (undefined1 *)0x5ff067;
  thunk_FUN_00406e80(&local_30,2,puVar2);
  puStack_40 = (undefined1 *)0x5ff074;
  thunk_FUN_00406e80(&local_20,2);
  puStack_40 = (undefined1 *)0x5ff082;
  FUN_00409ce0(&local_8,&DAT_004108f8);
  return;
}
