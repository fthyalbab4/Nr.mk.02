// rea decompile_all
// name: FUN_005ceed8
// address: 0x5ceed8
// body: available
// range: 0x5ceed8-0x5cf190 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5cef00 (push 0x5cf191 followed by fs-segment stack chaining); handler 0x5cf191 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005ceed8(undefined4 param_1)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  int *unaff_EBX;
  int *unaff_ESI;
  int iVar5;
  int *unaff_EDI;
  int *in_FS_OFFSET;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined1 local_80 [16];
  int *local_70;
  int *local_6c;
  undefined1 local_68 [16];
  int *local_58;
  int *local_54;
  undefined1 local_50 [16];
  int *local_40;
  int *local_3c;
  undefined4 local_38;
  undefined4 local_34;
  int local_30;
  int local_2c;
  int *local_28;
  int local_24;
  undefined1 *local_20;
  int *local_1c;
  int local_c;
  undefined4 local_8;

  iVar4 = 0x11;
  do {
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  local_1c = (int *)0x5ceef5;
  local_8 = param_1;
  thunk_FUN_00407660(param_1);
  local_20 = &LAB_005cf191;
  local_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&local_24;
  local_28 = (int *)0x5cef11;
  local_1c = (int *)&stack0xfffffffc;
  local_20 = (undefined1 *)FUN_005d179c(&PTR_LAB_005cd120,1,0);
  local_28 = (int *)0x5cef20;
  piVar3 = (int *)FUN_0043f190(&PTR_FUN_00432364,1);
  local_28 = (int *)0x5cef2c;
  (**(code **)(*piVar3 + 0x68))(piVar3,local_8);
  local_28 = (int *)0x5cef38;
  (**(code **)(*piVar3 + 0x48))(piVar3,1);
  local_28 = (int *)0x5cef44;
  (**(code **)(*piVar3 + 0xc))(piVar3,0,&local_34);
  local_28 = (int *)0x5cef51;
  cVar2 = FUN_004106b4(L"<?xml",local_34);
  if (cVar2 != '\0') {
    local_28 = (int *)0x5cef63;
    (**(code **)(*piVar3 + 0x1c))(piVar3,&local_38);
    local_28 = (int *)0x5cef6e;
    FUN_005c42c8(local_38,&stack0xfffffff0);
    local_28 = (int *)0x5cef76;
    FUN_00406e5c(&local_c);
    local_28 = (int *)0x5cef81;
    (**(code **)(*unaff_EBX + 0x14))(unaff_EBX,&local_3c);
    local_28 = (int *)0x5cef89;
    iVar4 = (**(code **)(*local_3c + 0xc))();
    if (-1 < iVar4 + -1) {
      local_24 = 0;
      local_2c = iVar4;
      do {
        local_28 = (int *)0x5cefa8;
        (**(code **)(*unaff_EBX + 0x14))(unaff_EBX,&local_40);
        local_28 = local_40;
        local_2c = 0x5cefb9;
        FUN_00429c6c(local_50,local_24,0xfc);
        piVar3 = local_28;
        iVar4 = *local_28;
        local_28 = (int *)0x5cefc5;
        (**(code **)(iVar4 + 0x10))(piVar3,local_50,&stack0xffffffec);
        local_28 = (int *)0x5cefd0;
        (**(code **)(*unaff_ESI + 0x14))(unaff_ESI,&local_54);
        local_28 = (int *)0x5cefd8;
        iVar4 = (**(code **)(*local_54 + 0xc))();
        if (-1 < iVar4 + -1) {
          do {
            local_30 = iVar4;
            local_28 = (int *)0x5ceff7;
            (**(code **)(*unaff_ESI + 0x14))(unaff_ESI,&local_58);
            local_28 = local_58;
            local_2c = 0x5cf008;
            FUN_00429c6c(local_68,local_58,0xfc);
            piVar3 = local_28;
            iVar4 = *local_28;
            local_28 = (int *)0x5cf014;
            (**(code **)(iVar4 + 0x10))(piVar3,local_68,&stack0xffffffe8);
            local_28 = (int *)0x5cf01f;
            (**(code **)(*unaff_EDI + 0x14))(unaff_EDI,&local_6c);
            local_28 = (int *)0x5cf027;
            iVar4 = (**(code **)(*local_6c + 0xc))();
            if (-1 < iVar4 + -1) {
              iVar5 = 0;
              do {
                local_28 = (int *)0x5cf040;
                (**(code **)(*unaff_EDI + 0x14))(unaff_EDI,&local_70);
                local_28 = local_70;
                local_2c = 0x5cf050;
                FUN_00429c6c(local_80,iVar5,0xfc);
                piVar3 = local_28;
                iVar1 = *local_28;
                local_28 = (int *)0x5cf05c;
                (**(code **)(iVar1 + 0x10))(piVar3,local_80,&local_1c);
                if (local_c == 0) {
                  local_28 = (int *)0x5cf06d;
                  (**(code **)(*local_1c + 0x50))(local_1c,&local_84);
                  local_28 = (int *)0x5cf07d;
                  FUN_0040810c(&local_c,local_84,0);
                }
                else {
                  local_28 = (int *)0x5cf08d;
                  (**(code **)(*local_1c + 0x50))(local_1c,&local_8c);
                  local_28 = (int *)0x5cf0a3;
                  FUN_0040810c(&local_88,local_8c,0);
                  local_28 = (int *)0x5cf0b4;
                  FUN_005d1adc(local_20,local_c,local_88);
                  local_28 = (int *)0x5cf0bc;
                  FUN_00406e5c(&local_c);
                }
                iVar5 = iVar5 + 1;
                iVar4 = iVar4 + -1;
              } while (iVar4 != 0);
            }
            local_28 = (int *)((int)local_28 + 1);
            local_30 = local_30 + -1;
            iVar4 = local_30;
          } while (local_30 != 0);
        }
        local_24 = local_24 + 1;
        local_2c = local_2c + -1;
      } while (local_2c != 0);
    }
  }
  piVar3 = local_1c;
  *in_FS_OFFSET = local_24;
  local_1c = (int *)&LAB_005cf19b;
  local_20 = (undefined1 *)0x5cf0f4;
  thunk_FUN_00406e5c(&local_8c,local_24,piVar3);
  local_20 = (undefined1 *)0x5cf0ff;
  FUN_00406e5c(&local_88);
  local_20 = (undefined1 *)0x5cf107;
  thunk_FUN_00406e5c(&local_84);
  local_20 = (undefined1 *)0x5cf10f;
  FUN_004249e8(local_80);
  local_20 = (undefined1 *)0x5cf122;
  FUN_00408e44(&local_70,&DAT_005c0e70,2);
  local_20 = (undefined1 *)0x5cf12a;
  FUN_004249e8(local_68);
  local_20 = (undefined1 *)0x5cf13d;
  FUN_00408e44(&local_58,&DAT_005c0e70,2);
  local_20 = (undefined1 *)0x5cf145;
  FUN_004249e8(local_50);
  local_20 = (undefined1 *)0x5cf158;
  FUN_00408e44(&local_40,&DAT_005c0e70,2);
  local_20 = (undefined1 *)0x5cf165;
  thunk_FUN_00406e80(&local_38,2);
  local_20 = (undefined1 *)0x5cf178;
  FUN_00408e44(&local_1c,&DAT_005c0e3c,3);
  local_20 = (undefined1 *)0x5cf180;
  FUN_0040b140(&stack0xfffffff0);
  local_20 = (undefined1 *)0x5cf188;
  FUN_00406e5c(&local_c);
  local_20 = (undefined1 *)0x5cf190;
  thunk_FUN_00406e5c(&local_8);
  return;
}
